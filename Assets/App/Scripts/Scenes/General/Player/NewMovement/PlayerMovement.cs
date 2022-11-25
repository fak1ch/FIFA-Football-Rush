using System;
using StarterAssets.InputSystems;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    public event Action OnJump; 

    [SerializeField] private float _maxMoveSpeed;
    [SerializeField] private float _smoothMoveMultiplier;
    
    [Space(10)] 
    [SerializeField] private bool _grounded;
    [SerializeField] private float _groundedOffset;
    [SerializeField] private float _groundedRadius;
    [SerializeField] private LayerMask _groundLayers;

    [Space(10)] 
    [SerializeField] protected Rigidbody _rigidbody;
    [SerializeField] protected Transform _bodyOrientation;

    [Space(10)] 
    [SerializeField] private InputSystem _inputSystem;

    protected Vector2 _moveInput;
    protected Vector3 _moveDirection;
    protected float _currentMoveSpeed;

    public bool Grounded => _grounded;
    public float MaxSpeed => _maxMoveSpeed;
    public float CurrentSpeed => _currentMoveSpeed;
    public Vector3 MoveDirection => _moveDirection;
    
    private void Update()
    {
        GroundedCheck();
        MyInput();
        SmoothMove();
        MovePlayer();
    }

    private void MyInput()
    {
        _moveInput = _inputSystem.MoveInput;
    }

    private void GroundedCheck()
    {
        Vector3 spherePosition = new Vector3(transform.position.x, transform.position.y - _groundedOffset, transform.position.z);
        _grounded = Physics.CheckSphere(spherePosition, _groundedRadius, _groundLayers, QueryTriggerInteraction.Ignore);
    }
    
    private void SmoothMove()
    {
        float endValue = _inputSystem.IsMouseDown ? _maxMoveSpeed : 0; 
        
        _currentMoveSpeed = Mathf.Lerp(_currentMoveSpeed, endValue, Time.deltaTime * _smoothMoveMultiplier);
    }
    
    protected virtual void MovePlayer()
    {
        _moveDirection = _bodyOrientation.forward + _bodyOrientation.right * _moveInput.x;

        Vector3 offset = _moveDirection * (_currentMoveSpeed * Time.deltaTime);
        
        _rigidbody.MovePosition(_rigidbody.position + offset);
    }

    public void Jump()
    {
        OnJump?.Invoke();
    }
    
    private void OnDrawGizmosSelected()
    {
        Color transparentGreen = new Color(0.0f, 1.0f, 0.0f, 0.35f);
        Color transparentRed = new Color(1.0f, 0.0f, 0.0f, 0.35f);

        Gizmos.color = Grounded ? transparentGreen : transparentRed;
        Gizmos.DrawSphere(new Vector3(transform.position.x, transform.position.y - _groundedOffset, transform.position.z), _groundedRadius);
    }
}
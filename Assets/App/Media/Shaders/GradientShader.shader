Shader "Custom/GradientShader"
{
    Properties
    {
        _ColorTop ("ColorTop", Color) = (1,0,0,1)
        _ColorBottom ("ColorBottom", Color) = (0,0,1,1)
        
        _Glossiness ("Smoothness", Range(0,1)) = 0.5
        _Metallic ("Metallic", Range(0,1)) = 0.0
        
        _Origin ("Origin", float) = 0.0
        _Spread ("Spread", Range(0,10)) = 0.0
    }
    SubShader
    {
        Tags { "RenderType"="Opaque" }
        LOD 200

        CGPROGRAM
        // Physically based Standard lighting model, and enable shadows on all light types
        #pragma surface surf Standard fullforwardshadows

        // Use shader model 3.0 target, to get nicer looking lighting
        #pragma target 3.0

        sampler2D _MainTex;
        
        struct Input
        {
            float2 uv_MainTex;
            float3 worldPos;
        };

        fixed _Glossiness;
        fixed _Metallic;
        fixed4 _ColorTop;
        fixed4 _ColorBottom;
        fixed _Origin;
        fixed _Spread;

        // Add instancing support for this shader. You need to check 'Enable Instancing' on materials that use the shader.
        // See https://docs.unity3d.com/Manual/GPUInstancing.html for more information about instancing.
        // #pragma instancing_options assumeuniformscaling
        UNITY_INSTANCING_BUFFER_START(Props)
            // put more per-instance properties here
        UNITY_INSTANCING_BUFFER_END(Props)
        
        void surf (Input IN, inout SurfaceOutputStandard o)
        {
            float3 localPos = IN.worldPos -  mul(unity_ObjectToWorld, float4(0,0,0,1)).xyz;
            fixed substract = localPos.y - _Origin;
            fixed divide = substract / _Spread;
            divide = clamp(divide, 0, 1);
            fixed4 newColor = lerp (_ColorBottom, _ColorTop, divide);
				
            o.Albedo = newColor.rgb;
            o.Metallic = _Metallic; 
            o.Smoothness = _Glossiness;
            o.Alpha = _ColorTop.a;
        }
        ENDCG
    }
    FallBack "Diffuse"
}

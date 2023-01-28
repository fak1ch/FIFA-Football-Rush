namespace Assets.App.Scripts.Scenes.MainScene.Map.Level.LevelObjects.Traps
{
    public class Spike : Trap
    {
        private void Start()
        {
            InitializeConfig(_gameConfig.levelObjectConfigs.trapConfigs.spikeConfig);
        }
    }
}
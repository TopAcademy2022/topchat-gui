using System.Collections.Generic;
using TopChat.API.Entities;
using TopChat.API.Interfaces;

namespace NetworkUdp
{
    public class NetworkUdpPlugin : IPlugin
    {
        public string GetName()
        {
            return "NetworkUdp";
        }

        public string GetVersion()
        {
            return "0.1";
        }

        public List<PluginRealization> GetRealizations()
        {
            List<PluginRealization> pluginRealizations = new List<PluginRealization>();

            PluginRealization connectionProvider = new PluginRealization()
            {
                InterfaceName = "TopChat.API.Interfaces.IConnectionProvider",
                RealizationClassName = "NetworkUdp.Services.ConnectionProviderUdp"
            };


            pluginRealizations.Add(connectionProvider);

            return pluginRealizations;
        }

        public void Invoke(){}
    }
}

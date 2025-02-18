using System.Net;
using System.Net.Sockets;
using TopChat.API.Interfaces;

namespace NetworkUdp.Services
{
    public class ConnectionProviderUdp : IConnectionProvider
    {
        private readonly UdpClient _udpClient;

        private int _port;

        private const int _DEFAULT_PORT = 5050;

        public ConnectionProviderUdp()
        {
            _port = _DEFAULT_PORT;
            _udpClient = new UdpClient();
        }

        public void SetPort(int port)
        {
            _port = port;
        }

        public bool Send(byte[] data, string destinationIp, int destinationPort)
        {
            IPEndPoint iPEndPoint = new IPEndPoint(IPAddress.Parse(destinationIp), destinationPort);
            if (_udpClient.Send(data, data.Length, iPEndPoint) > 0)
            {
                return true;
            }

            return false;
        }

        public byte[] Receive()
        {
            IPEndPoint iPEndPoint = new IPEndPoint(IPAddress.Any, _port);
            return _udpClient.Receive(ref iPEndPoint);
        }
    }
}

using System.Runtime.InteropServices;

namespace TopChatGUI
{
	public class GUI
	{
		[DllImport("libgui.dll", EntryPoint = "_Z12CreateWindowv")]
		private static extern void CreateWindow();

		public void Create()
		{
			CreateWindow();
		}
	}
}

using System.Runtime.InteropServices;

namespace TopChatGUI
{
	public class GUI
	{
		[DllImport("libgui.dll")]
		private static extern int CreateWindow(ref int argc, string[] argv);

		public void Create()
		{
			string[] argv = Environment.GetCommandLineArgs();
			int argc = argv.Length;

			CreateWindow(ref argc, argv);
		}
	}
}

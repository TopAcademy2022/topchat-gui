using System.Runtime.InteropServices;
using System.Text;

namespace TopChatGUI
{
	public class GUI
	{
        [DllImport("libgui.dll")]
        private static extern void Init();

        [DllImport("libgui.dll")]
        private static extern void RegisterDependencies(LoginDelegate loginDelegate);

        [DllImport("libgui.dll")]
		private static extern int CreateWindow(ref int argc, string[] argv);

        public delegate bool LoginDelegate(StringBuilder login, StringBuilder password);

		private bool LoginExample(StringBuilder login, StringBuilder password)
		{
			return false;
		}

        public void Create()
		{
			string[] argv = Environment.GetCommandLineArgs();
			int argc = argv.Length;

			LoginDelegate loginDelegate = new LoginDelegate(LoginExample);


            Init();
			RegisterDependencies(loginDelegate);
			CreateWindow(ref argc, argv);
		}
	}
}

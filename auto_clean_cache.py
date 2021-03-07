import os, shutil
home = os.path.expanduser("~")
if os.path.exists("{}/vscode/zerojudge/.vscode/c_debug_cache".format(home)):
    shutil.rmtree("{}/vscode/zerojudge/.vscode/c_debug_cache".format(home))
    os.mkdir("{}/vscode/zerojudge/.vscode/c_debug_cache".format(home))

import os
import sys
import shutil
base = '/Users/taeyeon/vscode/zerojudge/{}/debug'
if os.path.exists(base.format('c')):
    shutil.rmtree(base.format('c'))
    os.mkdir(base.format('c'))
if os.path.exists(base.format('cpp')):
    shutil.rmtree(base.format('cpp'))
    os.mkdir(base.format('cpp'))

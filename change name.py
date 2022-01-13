import os
folders = ['A', 'B', 'C']

for folder in folders:
    for index, filename in enumerate(os.listdir(folder)):
        os.renames(folder+'/'+filename, folder+'/'+str(index+1)+".jpg")
        # time.sleep(0.1)

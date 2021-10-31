# NachOS

使用 Ubuntu 16.04.7 32bit (i386)
https://releases.ubuntu.com/16.04/

```
uname -a
# Linux 4.15.0-45-generic #48~16.04.1-Ubuntu SMP Tue Jan 29 18:03 2019 UTC 2019 i686 i686 i686 GNU/Linux
```

### 更新

```shell
sudo apt-get update -y (可能需要密碼)
sudo apt-get install build-essential gcc-multilib g++-multilib -y (可能需要密碼)
```

### 安裝

```shell
wget http://mll.csie.ntu.edu.tw/course/os_f08/assignment/nachos_40.tar.gz
wget http://mll.csie.ntu.edu.tw/course/os_f08/assignment/mips-decstation.linux-xgcc.gz
wget http://mll.csie.ntu.edu.tw/course/os_f08/assignment/nachos-gcc.diff

tar -zxvf nachos_40.tar.gz
tar zxvf mips-decstation.linux-xgcc.gz

patch -p0 < nachos-gcc.diff

wget https://raw.githubusercontent.com/taeyeonssupdate/must_trash/trash/nachos/list.cc  -N -P NachOS-4.0/code/lib

cd NachOS-4.0/code/build.linux
make depend
make
./nachos
cd ../../coff2noff
make
../code/build.linux/nachos -x halt
```

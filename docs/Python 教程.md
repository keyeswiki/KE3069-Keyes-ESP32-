# Python 教程

**开发环境设置**

在开始构建项目之前，你需要首先做一些准备，这是非常重要的，你不能跳过。

**一、安装Thonny(重要)：**

Thonny是一个免费、开源的软件平台，体积小，界面简单，操作简单，功能丰富，是一个适合初学者的Python IDE。在本教程中，我们使用这个IDE在整个过程中开发ESP32。Thonny支持多种操作系统，包括Windows, Mac OS,  Linux。

**1.下载Thonny软件：**

(1) 进入软件官网：[https://thonny.org](https://thonny.org) 下载Thonny软件，最好下载最新版的，否则可能不支持ESP32.

(2) Thonny的开源代码库：[https://github.com/thonny/thonny](https://github.com/thonny/thonny)

请按照官网的指导安装或点击下面的链接下载安装。(请根据您的操作系统选择相应的选项.)

|操作系统|下载链接/方法|
| :--: | :--: |
|MAC OS：|[https://github.com/thonny/thonny/releases/download/v3.2.7/thonny-3.2.7.pkg](https://github.com/thonny/thonny/releases/download/v3.2.7/thonny-3.2.7.pkg)|
|Windows：|[https://github.com/thonny/thonny/releases/download/v3.2.7/thonny-3.2.7.exe](https://github.com/thonny/thonny/releases/download/v3.2.7/thonny-3.2.7.exe)|
|Linux：|最新版本:（如下）
```
Binary bundle for PC (Thonny+Python): 
bash <(wget -O - https://thonny.org/installer-for-linux) 
With pip:
pip3 install thonny
Distro packages (may not be the latest version):
Debian, Rasbian, Ubuntu, Mint and others:
sudo apt install thonny
Fedora:
sudo dnf install thonny
```
|

![图片不存在](./Python/media/691aee88a6f0771c7416be3547acd6ce.png)

![图片不存在](./Python/media/d577f429469daa3e36f0270f6f14be9c.png)

**2.Windows上安装Thonny软件：**

A.下载后的Thonny图标如下。

![图片不存在](./Python/media/8391c0dcc090cdbee910616f125c4a27.png)

B.双击“thonny-4.0.2.exe”，会出现下面对话框，我这里是选择“![图片不存在](./Python/media/b893aed32cde73b09cdb948d5588eccf.png)”进行操作的。你也可以选择“![图片不存在](./Python/media/86721bc54bd171a95e76e140d6216733.png)”进行操作的。

![图片不存在](./Python/media/25937888ff93553e85fa1d0ba89df5d8.png)

C.如果您不熟悉电脑软件安装，您可以一直单击“**Next**”直到安装完成。

![图片不存在](./Python/media/35cb8372fa4264fffd276a23ac041779.png)

![图片不存在](./Python/media/a30d1d505b110d16c3a4304108ed47fa.png)

D.如果您需要更改Thonny软件的安装路径，可以单击“**Browse...**”进行修改。选择安装路径后，单击“**OK**”。

如果您不想更改安装路径，只需单击“**Next**”；然后又继续单击“**Next**”。

![图片不存在](./Python/media/087d0515e40f7926c250482a352000a1.png)

![图片不存在](./Python/media/4d6b986f8e5e45ebf5ea981d0bd8779b.png)

E.选中“**Create desktop icon**”，Thonny软件会在你的桌面上生成一个快捷方式，方便你稍后打开Thonny软件。

![图片不存在](./Python/media/7e624c096b03fe4de2a81d8f45daf7a1.png)

F.单击“**Install**”安装软件。

![图片不存在](./Python/media/47917e20d7b062993d29c1ba485af9b1.png)

G.在安装过程中，您只需等待安装完成，千万不要点击“**Cancel**”，否则将无法安装成功。

![图片不存在](./Python/media/86f0178f6de6b3588bd6c5d58bcba927.png)

H.一旦看到如下界面，就表示已经成功安装了Thonny软件，点击“**Finish**”就可以。

![图片不存在](./Python/media/509aa2c1bbda49b81e2e5c40eae16cec.png)

I.如果你在安装过程中选择了“**Create desktop icon**”，则可以在桌面上看到如下图标。

![图片不存在](./Python/media/c6058db9b9639b732e8addec644f1220.png)

**二、Thonny软件基本配置** 

A.双击Thonny软件的桌面图标，可以看到如下界面，同时还可以进行语言选择(<span style="color: rgb(255, 76, 65);">这里选择简体中文</span>)和初始设置。设置完了点击“**Let’s go！**”。

![图片不存在](./Python/media/20e07e892206f4851f5d20e48bebd4a4.png)

![图片不存在](./Python/media/12af365d1396796f599b6dfe30919e57.png)

![图片不存在](./Python/media/8efbe0a5775b66f7c79d27dc7ca196e0.png)

![图片不存在](./Python/media/d3ad2e747e3a8d93006bf65142c19801.png)

![图片不存在](./Python/media/1b36b52a8a0e036c6d42177706588dd7.png)

B.选择“**视图**”→“**文件**”和“**Shell**”。

![图片不存在](./Python/media/610b462833d8282fb05958d2cd6f3ec5.png)

![图片不存在](./Python/media/c27f1203c244e5b4b8f912a218aa2ab5.png)

![图片不存在](./Python/media/00a23e714ffd72f5d4fcb50bf4e5af3e.png)

**三、安装CP2102驱动：**

ESP32通过CP2102驱动下载代码。所以在使用它之前，我们需要在计算机中安装CP2102驱动程序。

**Windows 系统**

检查CP2102驱动是否已经安装

1.用USB线连接计算机和ESP32。

![图片不存在](./Python/media/46cf3a8a1c79e456ac0f02da5ef38aec.png)

2.进入计算机主界面，选择“**此电脑**”，右键单击选择“**管理**”。

![图片不存在](./Python/media/94d329cb6c1b4e473da1c3efaa2ff1b4.png)

3.单击“**设备管理器**”。如果你的计算机已经安装了CP2102驱动，则可以看到“**Silicon Labs CP210x USB to UART Bridge(COMx)**”。

![图片不存在](./Python/media/26257c4da22869d81c9a5795a3f86768.png)

**安装CP2102驱动**

1.如果未安装CP2102驱动，界面显示如下。

![图片不存在](./Python/media/0fe123111f8eaa410a8475f9f889da21.png)

2.单击“**CP2102 USB to UART Bridge Controller**”，右键选择“**更新驱动程序(P)**”。

![图片不存在](./Python/media/1bb381872c77f0ea8da2f3184da164be.png)

3.单击 “**浏览我的电脑以查找驱动程序(R)**”.

![图片不存在](./Python/media/70fb71e2b93d86b87e640ca2eb94b3ae.png)

4.单击“浏览(R)...”选择CP210x_6.7.4(驱动路径：**..\其他重要资料\CP2102驱动文件\CP2102 驱动文件-Windows**)，单击“**下一页**”

![图片不存在](./Python/media/684ee28b12b9f0e8e92ed402f9cfabd8.jpg)

5.等待CP2102驱动安装完成。当界面显示如下时，表示已安装CP2102驱动。你可以关闭该界面。

![图片不存在](./Python/media/b2529cab7d8766c0622d14280e18b39c.png)

6.ESP32与计算机连接时，界面显示如下。

![图片不存在](./Python/media/dbf6accbe744c1625042c7164379a748.png)

<span style="color: rgb(0, 209, 0);">MAC 系统</span>

<br>

安装CP2102驱动方法请参照 “**<span style="background: rgb(255, 251, 0);">Arduino C 教程 Windows系统</span>**” 教程中 “<span style="color: rgb(255, 76, 65);">开发环境设置</span>” 部分。

**四、烧入Micropython固件(重要)**

要在ESP32主板上运行Python程序，我们需要先将固件烧入到ESP32主板。

**下载Micropython固件**

microPython官方网站：[http://micropython.org/](http://micropython.org/)

网页列出microPython的ESP32固件：[https://micropython.org/download/esp32/](https://micropython.org/download/esp32/)

![图片不存在](./Python/media/e104b567a7591c6ee38fa034c105ea67.png)

本教程中使用的固件是：<span style="color: rgb(0, 209, 0);">esp32-20210902-v1.19.bin</span>

我们的文件夹中也提供了这个固件：“**..\其他重要资料\Python固件和软件\Python_固件**”。

![图片不存在](./Python/media/3a22fb4f8238bacea9a880cc04461368.png)

**烧入Micropython固件**

用USB线连接计算机和ESP32主板。

![图片不存在](./Python/media/46cf3a8a1c79e456ac0f02da5ef38aec.png)

确保驱动程序已成功安装，并能正确识别COM端口。打开设备管理器并展开“**端口(COM和LPT)**”。

![图片不存在](./Python/media/9520c883fda5ad7907b23114abf7dd34.png)

<span style="color: rgb(255, 76, 65);">注意：不同的电脑，COM端口可能不同，这是正常情况。</span>

<br>
<br>

1.打开Thonny，点击“**运行**” ，选择 “**配置解释器**”。

![图片不存在](./Python/media/188fd4cf61083403f7d8bd9f96814814.png)

2.选中“**MicroPython (ESP32)**”，选中“**Silicon Labs CP210x USB to UART Bridge(COM7)**”，然后点击“**安装或更新MicroPython**”。

![图片不存在](./Python/media/33f47e1085dd98fe7a1a87c955e3fa4c.png)

![图片不存在](./Python/media/7553f3dadd7528fd9d0c1a493a34282c.png)

![图片不存在](./Python/media/3560ea7fdd94b1c9e9fc6c118d51ca3b.png)

3.弹出如下对话框，“**Port**”选择“**Silicon Labs CP210x USB to UART Bridge(COM7)**”，单击“**Browse...**”选择之前准备好的microPython固件<span style="color: rgb(0, 209, 0);">esp32-20220618-v1.19.1.bin</span>。检查“Erase flash before installing”和“Flash mode”，然后点击“**安装**”，等待安装完成提示。（<span style="color: rgb(255, 76, 65);">注意：如果安装固件失败，请再次点击“**安装**”，然后按住ESP32主板上的Boot键![图片不存在](./Python/media/a3ce49fbd6f40f09869aa7e1d9f902f8.png)，出现上传进度百分比再松开Boot键。</span>）

![图片不存在](./Python/media/31a813b6aee6c97d1e3c1ad823afb959.png)

![图片不存在](./Python/media/3a22fb4f8238bacea9a880cc04461368.png)

![图片不存在](./Python/media/624fd845172c4f61093b03a1e8b994be.png)

4.等待安装完成。安装完成后先点击“**关闭**”再点击“**好的**”就行。

![图片不存在](./Python/media/f9412943c23e89b54d77943762375c74.png)

![图片不存在](./Python/media/ddf2a71d50fc5c5702cccc0516992c19.png)

![图片不存在](./Python/media/e697ce4e1d111990473cad4a56007888.png)

5.关闭所有对话框，转到主界面，点击“![图片不存在](./Python/media/7b5fe8311cc696a95e2436fcda1f2a41.png)”。如下图所示：

![图片不存在](./Python/media/7ddff7c501118105a347040e257382de.png)

6.到目前为止，一切准备工作都已就绪。

**五、测试代码：**

**测试Shell命令**

在“Shell”窗口中输入“print('hello world')”并按Enter键。

![图片不存在](./Python/media/a62c6c3fe3a805826b02251b5ede2233.png)

**在线运行**

ESP32需要连接到计算机时，它是在线运行。用户可以使用Thonny编写和调试程序。

1.打开Thonny并单击![图片不存在](./Python/media/15ef882707c025fcceb5fc78f624c946.png)“打开”。

![图片不存在](./Python/media/dbbcc54db4e22627a5b15c8155c46e53.png)

2.在新弹出的窗口中，单击“**此电脑**”。

![图片不存在](./Python/media/423687ce5fedb4a31b6b415b02d08871.png)

在新的对话框中，在路径：“<span style="color: rgb(255, 76, 65);">..\程序代码\Python_代码\项目01 Hello World</span>” 中选择 “**Project_01_HelloWorld.py**” 。

![图片不存在](./Python/media/d91f0f708b1a7f16a5552ca3b0934fe7.png)

![图片不存在](./Python/media/74b7bfdb8175388b3c34a50bcce37bad.png)

单击![图片不存在](./Python/media/5c05febdb56bb5ef370e897c012c1b91.png), “Hello World”将在“Shell”窗口中打印出来。

![图片不存在](./Python/media/b6fbe337a8053653dc74e1a567fddb8c.png)

<span style="color: rgb(255, 76, 65);">注意：</span>在线运行时，如果按下ESP32的复位键，用户的代码将不会再次执行。

**六、Thonny常见的操作：**

本教程中使用的代码保存在（即路径）：“**..\程序代码\Python_代码**”。

![图片不存在](./Python/media/c982aaf9952be57c1ab7464bc20deedb.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)


**上传代码到ESP32**

为了方便起见，我们以“**项目16 I2C 128×32 LCD**”为例。在“**项目16 I2C 128×32 LCD**”文件夹中选择“lcd128_32\.py”，右键单击鼠标，选择“**上传到/**”将代码上传到ESP32的根目录中。

![图片不存在](./Python/media/f6e2793480a0d06c1d605490d8f52340.png)

**下载代码到电脑**

在“MicroPython 设备”中选择“boot\.py”，右键选择“**下载到…**”把代码下载到你的电脑里。

![图片不存在](./Python/media/6560d1e5bb16ada8a54b21ce2c27ba56.png)

**删除ESP32根目录下的文件**

在“MicroPython 设备”中选择“lcd128_32\.py”，右键单击它且选择“**删除**”，将“lcd128_32\.py”从ESP32的根目录中删除。

![图片不存在](./Python/media/915c7ab8ff55522f9af768a8bbb6f15b.png)

![图片不存在](./Python/media/794d9f549647346da9c61c0609e3c7b6.png)


## 项目01 Hello World

**1.项目介绍：**

对于ESP32的初学者，我们将从一些简单的东西开始。在这个项目中，你只需要一个ESP32主板，USB线和电脑就可以完成“Hello World!”项目。它不仅是ESP32主板和电脑的通信测试，也是ESP32的初级项目。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)|
| :--: | :--: |
| ESP32*1 | USB 线*1 |

**3.项目接线：**

在本项目中，我们通过USB线将ESP32和电脑连接起来。

![图片不存在](./Python/media/46cf3a8a1c79e456ac0f02da5ef38aec.png)

**4.在线运行代码：**

要在线运行ESP32，你需要把ESP32连接到电脑上。这样就可以使用Thonny软件编译或调试程序。

**优点：** 

1. 你们可以使用Thonny软件编译或调试程序。

2. 通过“Shell”窗口，你们可以查看程序运行过程中产生的错误信息和输出结果，并可以在线查询相关功能信息，帮助改进程序。

**缺点：**

1. 要在线运行ESP32，你必须将ESP32连接到一台电脑上并和Thonny软件一起运行。

2. 如果ESP32与电脑断开连接，当它们重新连接时，程序将无法再次运行。

**基本操作：**

1.打开Thonny软件，并且单击![图片不存在](./Python/media/de77de1c3006b25f2a8f3dfcec326cdb.png)“**打开...**”。

![图片不存在](./Python/media/b2e34da970c01c1aa076fcf62fff55e9.png)

2.在新弹出的窗口中，单击“**此电脑**”。

![图片不存在](./Python/media/f3919d4dce2da59b52e50ca730e5fdd7.png)

在新的对话框中，选中“Project_01_HelloWorld.py”,单击“**打开**”。

![图片不存在](./Python/media/c79103a8f8df62027d9c2f8444f97444.png)

![图片不存在](./Python/media/cf92c3a825ea8f8c0a6acc40114154ad.png)


<span style="color: rgb(255, 76, 65);">**注意：**</span>

本教程中使用的代码保存在：“**..\程序代码\Python_代码**” 的路径中。

![图片不存在](./Python/media/c982aaf9952be57c1ab7464bc20deedb.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

3.单击![图片不存在](./Python/media/5c05febdb56bb5ef370e897c012c1b91.png)来执行程序“Hello World!”, "Welcome Keyestudio" 并将打印在“Shell”窗口。

![图片不存在](./Python/media/50db2dd9938bd0554a1971fb33f02f7a.png)

**5.退出在线运行**

当在线运行时，单击Thonny软件上![图片不存在](./Python/media/555a25f055ba1b4c56ee4c3a28ffe5af.png)或按Ctrl+C退出程序。

![图片不存在](./Python/media/4f907261ba0835c09c29c1cf20b80b53.png)


## 项目02 点亮LED

**1.项目介绍：**

在这个项目中，我们将向你展示点亮LED。我们使用ESP32的数字引脚打开LED，使LED被点亮。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/325f351a1cc5c9af86988ddafd03fa19.png)|
| :--: | :--: | :--: |
|ESP32*1|面包板*1|红色LED*1|
|![图片不存在](./Python/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Python/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)|
|220Ω电阻*1|跳线*2|USB 线*1|

**3.元件知识：**

**（1）LED**

![图片不存在](./Python/media/32369e035f09fa12898e90cd3f916cbe.png)

LED是一种被称为“发光二极管”的半导体，是一种由半导体材料(硅、硒、锗等)制成的电子器件。它有正极和负极。短腿为负极，接GND，长腿为正极，接3.3V或5V。

![图片不存在](./Python/media/cbb16ef4d8cb62a4001d1a05ae3ac615.png)

**（2）五色环电阻**

电阻是电路中限制或调节电流流动的电子元件。左边是电阻器的外观，右边是电阻在电路中表示的符号。电阻(R)的单位为欧姆(Ω)，1 mΩ= 1000 kΩ，1kΩ= 1000Ω。
   
我们可以使用电阻来保护敏感组件，如LED。电阻的强度（以Ω为单位）用小色环标记在电阻器的主体上。每种颜色代表一个数字，你可以用电阻对照卡查找。

![图片不存在](./Python/media/e60472f717ced1cc0bd94f4972ef0cd0.png)

在这个套件中，我们提供了3个具有不同电阻值的五色环电阻。这里以3个五色环电阻为例：

220Ω电阻×10

![图片不存在](./Python/media/951ce7d7778b34bf8fbdb3de1b8c3116.png)

10KΩ电阻×10

![图片不存在](./Python/media/2d3f0996515352c92c07d17e074e7308.png)

1KΩ电阻×10

![图片不存在](./Python/media/931d1535563f6d817300f97c0946a01c.png)

在相同的电压下，会有更小的电流和更大的电阻。电流、电压、电阻之间的联系可以用公式表示：I=U/R。在下图中，目前通过R1的电流: I = U / R = 3 V / 10 KΩ= 0.0003A= 0.3mA。

![图片不存在](./Python/media/997accddd11490d13b769b9f3477daa7.png)

不要把电阻值很低的电阻直接连接在电源两极，这样会使电流过高而损坏电子元件。电阻是没有正负极之分。

**（3）面包板**

面包板是实验室中用于搭接电路的重要工具。面包板上有许多孔，可以插入集成电路和电阻等电路元件。熟练掌握面包板的使用方法是提高实验效率，减少实验故障出现几率的重要基础之一。下面就面包板的结构和使用方法做简单介绍。一个典型的面包板如下所示：

![图片不存在](./Python/media/d4cb46e6b01d820bb150f0e8a122417e.png)

 面包板的外观和内部结构如上图所示，常见的最小单元面包板分上、中、下三部分，上面和下面部分一般是由一行或两行的插孔构成的窄条，中间部分是由中间一条隔离凹槽和上下各5 行的插孔构成的条。

![图片不存在](./Python/media/2e9ef45f88652609af40b031ed0f0084.png)

在面包板的两个窄条分别有两行插孔，两行之间是不连通的，一般是作为电源引入的通路。上方第一行标有“+”的一行有10组插孔（内部都是连通），均为正极；上方第二行标有“-”的一行有10组插孔，（内部都是连通），均为接地。面包板下方的第一行与第二行结构同上。如需用到整个面包板，通常将“+”与“+”用导线连接起来，“-”与“-”用导线连接起来。

中间部分宽条是由中间一条隔离凹槽和上下各5 行的插孔构成。在同一列中的5 个插孔是互相连通的，列和列之间以及凹槽上下部分则是不连通的。外观及结构如下图：

![图片不存在](./Python/media/8690e125a8f918f5e2b7950526e98ebb.png)

中间部分宽条的连接孔分为上下两部分，是面包板的主工作区，用来插接原件和跳线。在同一列中的5个插孔（即a-b-c-d-e，f-g-h-i-j）是互相连通的；列和列之间以及凹槽上下部分是不连通的。在做实验的时候，通常是使用两窄一宽组成的小单元，在宽条部分搭接电路的主体部分，上面的窄条取一行做电源，下面的窄条取一行做接地。中间宽条用于连接电路，由于凹槽上下是不连通的，所以集成块一般跨插在凹槽上。

**(4)电源**

ESP32需要3.3V-5V电源，在本项目中，我们通过用USB线将ESP32和电脑连起来。

![图片不存在](./Python/media/46cf3a8a1c79e456ac0f02da5ef38aec.png)

**4.项目接线图：**

首先，切断ESP32的所有电源。然后根据接线图搭建电路。电路搭建好并验证无误后，用USB线将ESP32连接到电脑上。

<span style="color: rgb(255, 76, 65);">注意：</span>避免任何可能的短路(特别是连接3.3V和GND)!

<span style="color: rgb(255, 76, 65);">警告：短路可能导致电路中产生大电流，造成元件过热，并对硬件造成永久性损坏。</span>

![图片不存在](./Python/media/6d79aa47daab6bc5dc46b1e62215d9c8.png)

<span style="color: rgb(255, 76, 65);">注意: </span>

怎样连接LED 

![图片不存在](./Python/media/cbb16ef4d8cb62a4001d1a05ae3ac615.png)

怎样识别五色环220Ω电阻

![图片不存在](./Python/media/951ce7d7778b34bf8fbdb3de1b8c3116.png)

**5.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/c982aaf9952be57c1ab7464bc20deedb.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目02 点亮LED”。并鼠标左键双击“Project_02_Turn_On_LED.py”。

![图片不存在](./Python/media/8c6add6b860d8657febf1e0af8d09e13.png)

```
from machine import Pin
import time

led = Pin(15, Pin.OUT)   # 创建引脚15为LED对象，设置引脚15为输出

led.value(1)    # led点亮
```
**6.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/6ee37e7037e94f4e21cc11669bba6303.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：电路中的LED被点亮。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/6027e93ef7d0554b4d34d962dbf5f78d.png)

![图片不存在](./Python/media/c1de80712829b80aa4ee6d77c6907e4e.png)





## 项目03 LED闪烁

**1.项目介绍：**

在这个项目中，我们将向你展示LED闪烁效果。我们使用ESP32的数字引脚打开LED，让它闪烁。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/325f351a1cc5c9af86988ddafd03fa19.png)|
| :--: | :--: | :--: |
|ESP32*1|面包板*1|红色LED*1|
|![图片不存在](./Python/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Python/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)|
|220Ω电阻*1|跳线*2|USB 线*1|

**3.项目接线图：**

首先，切断ESP32的所有电源。然后根据电路图和接线图搭建电路。电路搭建好并验证无误后，用USB线将ESP32连接到电脑上。

<span style="color: rgb(255, 76, 65);">注意：</span>避免任何可能的短路(特别是连接3.3V和GND)!

<span style="color: rgb(255, 76, 65);">警告：短路可能导致电路中产生大电流，造成元件过热，并对硬件造成永久性损坏。 </span>

![图片不存在](./Python/media/6d79aa47daab6bc5dc46b1e62215d9c8.png)


<span style="color: rgb(255, 76, 65);">注意: </span>

怎样连接LED 

![图片不存在](./Python/media/cbb16ef4d8cb62a4001d1a05ae3ac615.png)

怎样识别五色环220Ω电阻

![图片不存在](./Python/media/951ce7d7778b34bf8fbdb3de1b8c3116.png)

**4.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/c982aaf9952be57c1ab7464bc20deedb.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目03 LED闪烁”。并鼠标左键双击“Project_03_LED_Flashing.py”。

![图片不存在](./Python/media/6280394313e1222f34d266a558eb4e6c.png)

```
from machine import Pin
import time

led = Pin(15, Pin.OUT)   # 创建引脚15为LED对象，设置引脚15为输出

try:
    while True:
        led.value(1)    # LED点亮
        time.sleep(0.5) # 延时 0.5s
        led.value(0)    # LED熄灭
        time.sleep(0.5) # 延时 0.5s
except:
    pass

```
**5.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/bc216463e15b9b9a17a267106b76b8e8.png)

单击“![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)”，代码开始执行，你会看到的现象是：电路中的LED开始闪烁。按“Ctrl+C”或单击“![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)”退出程序。

![图片不存在](./Python/media/cc82f4f88dca5cfde7f66b76f2a508ed.png)

![图片不存在](./Python/media/cf58420229598d0f9b902b73b380e79b.png)











## 项目04 呼吸灯

**1.项目介绍：**

在之前的研究中，我们知道LED有亮/灭状态，那么如何进入中间状态呢?如何输出一个中间状态让LED“半亮”?这就是我们将要学习的。呼吸灯，即LED由灭到亮，再由亮到灭，就像“呼吸”一样。那么，如何控制LED的亮度呢?我们将使用ESP32的PWM来实现这个目标。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/325f351a1cc5c9af86988ddafd03fa19.png)|
| :--: | :--: | :--: |
|ESP32*1|面包板*1|红色LED*1|
|![图片不存在](./Python/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Python/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)|
|220Ω电阻*1|跳线*2|USB 线*1|

**3.元件知识：**

![图片不存在](./Python/media/e739a6e4a95fa8bbbefb26ef955dc465.png)

**模拟信号 & 数字信号** 

模拟信号在时间和数值上都是连续的信号。相反，数字信号或离散时间信号是由一系列数字组成的时间序列。生活中的大多数信号都是模拟信号，一个熟悉的模拟信号的例子是: 全天的温度是连续不断变化的，而不是突然从0到10的瞬间变化。然而，数字信号的值可以瞬间改变，这个变化用数字表示为1和0(二进制代码的基础)。如下图所示，我们可以更容易地看出它们的差异。

![图片不存在](./Python/media/550c1d587189ce5ac3678f44b08ac888.png)

在实际应用中，我们经常使用二进制作为数字信号，即一系列的0和1。由于二进制信号只有两个值(0或1)，因此具有很大的稳定性和可靠性。最后，可以将模拟信号和数字信号相互转换。


**PWM：**
脉宽调制(PWM)是一种利用数字信号控制模拟电路的有效方法。普通处理器不能直接输出模拟信号。PWM技术使这种转换(将数字信号转换为模拟信号)非常方便。PWM技术利用数字引脚发送一定频率的方波，即高电平和低电平的输出，交替持续一段时间。每一组高电平和低电平的总时间一般是固定的，称为周期(注:周期的倒数是频率)。高电平输出的时间通常称为脉宽，占空比是脉宽(PW)与波形总周期(T)之比的百分比。高电平输出持续时间越长，占空比越长，模拟信号中相应的电压也就越高。下图显示了对应于脉冲宽度0%-100%的模拟信号电压在0V-3.3V(高电平为3.3V)之间的变化情况.

![图片不存在](./Python/media/0c29da4ca7a2fee2f5a0078eacc9e88a.png)

PWM占空比越长，输出功率越高。既然我们了解了这种关系，我们就可以用PWM来控制LED的亮度或直流电机的速度等等。从上面可以看出，PWM并不是真实的模拟信号，电压的有效值等于相应的模拟信号。因此，我们可以控制LED和其他输出模块的输出功率，以达到不同的效果。

**ESP32 与 PWM**

几乎所有ESP32输入/输出引脚都可用于PWM（脉冲宽度调制）。使用这些引脚可以控制电机和LED灯等。

**4.项目接线图：**

![图片不存在](./Python/media/6d79aa47daab6bc5dc46b1e62215d9c8.png)

**5.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/c982aaf9952be57c1ab7464bc20deedb.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目04 呼吸灯”。并鼠标左键双击“Project_04_Breathing_LED.py”。

![图片不存在](./Python/media/9738659594bf2791978a13628dd5ae42.png)

```
import time
from machine import Pin,PWM

## ESP32 PWM引脚输出的方式与传统控制器不同。
## 它可以改变频率和占空比通过配置PWM的参数在初始化阶段。
## 定义GPIO15的输出频率为10000Hz，分配给PWM。

pwm =PWM(Pin(15,Pin.OUT),10000)

try:
    while True:
## 占空比范围为0-1023，因此我们使用第一个for回路控制PWM改变占空比值，使PWM输出0% -100%;
## 使用第二个for回路使PWM输出100%-0%。 
        for i in range(0,1023):
            pwm.duty(i)
            time.sleep_ms(1)
            
        for i in range(0,1023):
            pwm.duty(1023-i)
            time.sleep_ms(1)  
except:
## 每次使用PWM时，硬件定时器将打开以配合它。
## 因此，每次使用PWM后，都需要调用deinit()来关闭定时器。否则，下次PWM可能无法工作.
    pwm.deinit()
```

**6.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/9c1c956e61015c180d8742162327ad16.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：电路中的LED从暗逐渐变亮，再从亮逐渐变暗，就像呼吸一样。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/af597d2a47b8d896897ab8078af2dce5.png)

![图片不存在](./Python/media/7a0d2717b48056cbef36f880212d8e07.png)




## 项目05 交通灯

**1.项目介绍：**

交通灯在我们的日常生活中很普遍。根据一定的时间规律，交通灯是由红、黄、绿三种颜色组成的。每个人都应该遵守交通规则，这可以避免许多交通事故。在这个项目中，我们将使用ESP32和一些led(红，黄，绿)来模拟交通灯。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/325f351a1cc5c9af86988ddafd03fa19.png)|![图片不存在](./Python/media/36f39ba5899a86990d02500371bc0e77.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|红色LED*1|黄色 LED*1|
|![图片不存在](./Python/media/f361df3b38005087cb22efc34689d554.png)|![图片不存在](./Python/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Python/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)|
|绿色LED*1|220Ω电阻*3|跳线若干|USB 线*1|

**3.项目接线图：**

![图片不存在](./Python/media/6122c8ef01c7a01dc5491df1c73a00b1.png)

**4.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/c982aaf9952be57c1ab7464bc20deedb.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目05 交通灯”。并鼠标左键双击“Project_05_Traffic_Lights.py”。

![图片不存在](./Python/media/666e9735d60bf0453757691c95e20fe5.png)

```
from machine import Pin
import time

led_red = Pin(0, Pin.OUT)  # 创建引脚0为红色led对象，设置引脚0为输出
led_yellow = Pin(2, Pin.OUT)  # 创建引脚2为黄色led对象，设置引脚2为输出
led_green = Pin(15, Pin.OUT) # 创建引脚15为绿色led对象，设置引脚15为输出

while True:
    led_red.value(1)  # 红色LED点亮
    time.sleep(5)   # 延时 5s
    led_red.value(0) # 红色LED熄灭
    led_yellow.value(1)
    time.sleep(0.5)
    led_yellow.value(0)
    time.sleep(0.5)
    led_yellow.value(1)
    time.sleep(0.5)
    led_yellow.value(0)
    time.sleep(0.5)
    led_yellow.value(1)
    time.sleep(0.5)
    led_yellow.value(0)
    time.sleep(0.5)
    led_green.value(1)
    time.sleep(5) 
    led_green.value(0) 
```
**5.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/8dcbf8aa22d2894969bf233829bb80f8.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：1.首先，红灯会亮5秒，然后熄灭；2.其次，黄灯会闪烁3次，然后熄灭；3.然后，绿灯会亮5秒，然后熄灭；4.继续运行上述1-3个步骤。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/9757f967a98385626d8588f64eab0c18.png)

![图片不存在](./Python/media/88468668fc5f1d198863c79778862194.png)









## 项目06 RGB LED

![图片不存在](./Python/media/bd43dadde69fa133646046983ca30f0f.png)

**1.项目介绍：**

RGB led由三种颜色(红、绿、蓝)组成，通过混合这三种基本颜色可以发出不同的颜色。在这个项目中，我们将向你介绍RGB LED，并向你展示如何使用ESP32控制RGB LED发出不同的颜色光。即使RGB LED是非常基本的，但这也是一个介绍自己或他人电子和编码基础的伟大方式。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/6de88c5b9c38d8ab879ae91eb51431b7.png)|
| :--: | :--: | :--: |
|ESP32*1|面包板*1|RGB LED*1|
|![图片不存在](./Python/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Python/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)|
|220Ω电阻*3|跳线若干|USB 线*1|

**3.元件知识：**

显示器大多遵循RGB颜色标准，电脑屏幕上的所有颜色都是由红、绿、蓝三种颜色以不同比例混合而成。 

![图片不存在](./Python/media/ae51546482ff149a5cd40ead3d110bc8.png)

这个RGB LED有4个引脚，每个颜色(红，绿，蓝)和一个共同的阴极。为了改变RGB led的亮度，我们可以使用ESP的PWM引脚。PWM引脚会给RGB led不同占空比的信号以获得不同的颜色。

如果我们使用3个10位PWM来控制RGBLED，理论上我们可以通过不同的组合创建2^10 ×2^10 ×2^10= 1,073,741,824(10亿)种颜色。

**4.项目接线图：**

![图片不存在](./Python/media/a89020210f9ff33ca99ddf347cc86a21.png)

**5.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/c982aaf9952be57c1ab7464bc20deedb.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目06 RGB LED”。并鼠标左键双击“Project_06_RGB_LED.py”。

![图片不存在](./Python/media/03361d1c4f6ee83bac60498c2f726dfa.png)

```
## 导入Pin、PWM和random库.
from machine import Pin, PWM
from random import randint
import time

## 配置GPIO15, GPIO2, GPIO0的输出方式为PWM输出，PWM频率为10000Hz.
pins = [0, 2, 15]

pwm0 = PWM(Pin(pins[0]),10000)  
pwm1 = PWM(Pin(pins[1]),10000)
pwm2 = PWM(Pin(pins[2]),10000)

##定义一个函数来设置RGBLED的颜色.
def setColor(r, g, b):
    pwm0.duty(1023-r)
    pwm1.duty(1023-g)
    pwm2.duty(1023-b)
    
try:
    while True:
        red   = randint(0, 1023) 
        green = randint(0, 1023)
        blue  = randint(0, 1023)
        setColor(red, green, blue)
        time.sleep_ms(200)
except:
    pwm0.deinit()
    pwm1.deinit()
    pwm2.deinit()
```
**6.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/5639a5afa70312c8b0d170ce566d11f4.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：RGB LED开始显示随机颜色。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/6e4410e89094a9feaab5a83b37195503.png)

![图片不存在](./Python/media/b926527c01e66d984f86facdb97e10fc.png)
























## 项目07 流水灯

**1.项目介绍：**

在日常生活中，我们可以看到许多由不同颜色的led组成的广告牌。他们不断地改变灯光(像流水一样)来吸引顾客的注意。在这个项目中，我们将使用ESP32控制10个leds实现流水的效果。 

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/325f351a1cc5c9af86988ddafd03fa19.png)|
| :--: | :--: | :--: |
|ESP32*1|面包板*1|红色LED*10|
|![图片不存在](./Python/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Python/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)|
|220Ω电阻*10|跳线若干|USB 线*1|

**3.项目接线图:**

![图片不存在](./Python/media/5a5c21da428df050a30ce9947810486a.png)

**4.项目代码：**

本项目是设计制作一个流水灯。这是这些行动：首先打开LED #1，然后关闭它。然后打开LED #2，然后关闭…并对所有10个LED重复同样的操作，直到最后一个LED关闭。这一过程反复进行，以实现流水的“运动”。

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/c982aaf9952be57c1ab7464bc20deedb.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目07 流水灯”。并鼠标左键双击“Project_07_Flowing_Water_Light.py”。

![图片不存在](./Python/media/a07f90f82ca639a214b04710cf134ee6.png)

```
from machine import Pin
import time

## 使用阵列定义10个连接点阵屏的GPIO端口，便于操作。.
pins = [22, 21, 19, 18, 17, 16, 4, 0, 2, 15]
## 使用两个for循环分别从左到右打开led，然后从右到左打开led
def showLed():
    for pin in pins:
        print(pin)
        led = Pin(pin, Pin.OUT)
        led.value(1)
        time.sleep_ms(100)
        led.value(0)
        time.sleep_ms(100)        
    for pin in reversed(pins):
        print(pin)
        led = Pin(pin, Pin.OUT)
        led.value(1)
        time.sleep_ms(100)
        led.value(0)
        time.sleep_ms(100)
          
while True:
    showLed()
```
**5.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/30367f2dff6d0e255f230a464652015c.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：10个LED将从左到右点亮，然后从右到左返回。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/63aad77861c89c8435e26ed9b59d294e.png)

![图片不存在](./Python/media/7546b1e47be75d184578949aba70ee0a.png)
























## 项目08 一位数码管

**1.项目介绍：**

七段数码管是一种显示十进制数字的电子显示设备，广泛应用于数字时钟、电子仪表、基本计算器和其他显示数字信息的电子设备。甚至我们在电影中看到的炸弹也有七段数码管。也许七段数码管看起来不够现代，但它们是更复杂的点阵显示器的替代品，在有限的光线条件下和强烈的阳光下都很容易使用。在这个项目中，我们将使用ESP32控制一位数码管显示数字。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/205aad52163781b8f1857212f1011848.png)|
| :--: | :--: | :--: |
|ESP32*1|面包板*1|一位数码管*1|
|![图片不存在](./Python/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Python/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)|
|220Ω电阻*8|跳线若干|USB 线*1|

**3.元件知识：**

![图片不存在](./Python/media/24cd9e937ce10d6bd7bd04581d758894.png)

**一位数码管显示原理：** 数码管显示是一种半导体发光器件。它的基本单元是一个发光二极管(LED)。数码管显示根据段数可分为7段数码管和8段数码管。8段数码管比7段多一个LED单元(用于小数点显示)。七段LED显示屏的每段是一个单独的LED。根据LED单元接线方式，数码管可分为共阳极数码管和共阴极数码管。

在共阴极7段数码管中，分段LED的所有阴极(或负极)都连接在一起，你应该把共阴极连接到GND，要点亮一个分段LED，你可以将其关联的引脚设置为HIGH。

在共阳极7段数码管中，所有段的LED阳极(正极)都连接在一起，你应该把共阳极连接到+5V。要点亮一个分段LED，你可以将其关联的引脚设置为LOW。

![图片不存在](./Python/media/19ff4c77c2703c262a9cd5295724ae02.png)

数码管的每个部分由一个LED组成。所以当你使用它的时候，你也需要使用一个限流电阻。否则，LED会被烧坏。在这个实验中，我们使用了一个普通的<span style="color: rgb(255, 76, 65);">共阴极一位数码管</span>。正如我们上面提到的，你应该将公共阴极连接到GND，要点亮一个分段LED，你可以将其关联的引脚设置为HIGH。

**4.项目接线图：**

<span style="color: rgb(255, 76, 65);">注意：</span>插入面包板的七段数码管方向与接线图一致，右下角多一个点。

![图片不存在](./Python/media/b1774fdf03e96a8b6a16d03db21a93a0.png)

![图片不存在](./Python/media/da76f2ea8684ac4bb13d8b55d272977a.png)


**5.项目代码：**

数字显示分7段，小数点显示分1段。当显示某些数字时，相应的段将被点亮。例如，当显示数字1时，b和c段将被打开。

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/c982aaf9952be57c1ab7464bc20deedb.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目08 一位数码管”。并鼠标左键双击“Project_08_One_Digit_Digital_Tube.py”。

![图片不存在](./Python/media/8fa5f6f41f978b0799325594a32a499e.png)

```
from machine import Pin
import time

a = Pin(16, Pin.OUT)
b = Pin(4, Pin.OUT)
c = Pin(5, Pin.OUT)
d = Pin(18, Pin.OUT)
e = Pin(19, Pin.OUT)
f = Pin(22, Pin.OUT)
g = Pin(23, Pin.OUT)
dp = Pin(17, Pin.OUT)

pins = [Pin(id,Pin.OUT) for id in [16, 4, 5, 18, 19, 22, 23, 17]]

def show(code):
    for i in range(0, 8):
        pins[i].value(~code & 1)
        code = code >> 1

## 选择0 ~ 9之间的编码
mask_digits = [0xc0, 0xf9, 0xa4, 0xb0, 0x99, 0x92, 0x82, 0xf8,0x80, 0x90]
for code in reversed(mask_digits):
    show(code)
    time.sleep(1)
```

**6.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/2a0ef200ee4286ce1a1d64a2095819cf.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：一位数码管将显示从9到0的数字。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/58534a38dd6f6278a1812adccbb0a28b.png)

![图片不存在](./Python/media/06886089efa6a52fef3a5e85cd3327cc.png)
















## 项目09 四位数码管

**1.项目介绍：**

四位数码管是一种非常实用的显示器件，电子时钟的显示，球场上的记分员，公园里的人数都是需要的。由于价格低廉，使用方便，越来越多的项目将使用4位数码管。在这个项目中，我们使用ESP32控制四位数码管来显示四位数字。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/9fdfea69b62531a92309052760130694.png) |
| :--: | :--: | :--: |
|ESP32*1|面包板*1|四位数码管*1|
|![图片不存在](./Python/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Python/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)|
|220Ω电阻*8|跳线若干|USB 线*1|

**3.元件知识：**

![图片不存在](./Python/media/57fbc9480875664d1ad27536ff79728d.png)

**四位数码管：** 四位数码管有共阳极和共阴极两种四位数码管，显示原理是和一位数码管是类似的，都是8个GPIO口控制数码管的显示段，就是8个led灯，不过，这里是4位的，所以就还需要4个GPIO口来控制位选择端，就是选择哪个单个数码管亮，位的切换很快，肉眼区分不出来，这样看起来是多个数码管同时显示。

<span style="color: rgb(255, 76, 65);">我们的四位数码管是共阴极的</span>。

下图为4位数码管的引脚图，G1、G2、G3、G4就是控制位的引脚。

![图片不存在](./Python/media/da1ad5bb24e7bcd8b2671641ed38f3c4.png)

下图为4位数码管内部布线原理图

![图片不存在](./Python/media/2b44ecde85d4f9fcaa73cfcd2e6914d9.png)

![图片不存在](./Python/media/84fbe7aa78a614af5e5e8ada6c7a509d.png)

**4.项目接线图：**

![图片不存在](./Python/media/b34ecf777f13629448cd300a8c33e39c.png)

**5.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/c982aaf9952be57c1ab7464bc20deedb.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目09 四位数码管”。并鼠标左键双击“Project_09_Four_Digit_Digital_Tube.py”。

![图片不存在](./Python/media/be9af1339baea695fd6c9e2eb4012cfb.png)

```
from machine import Pin
import time

##数码管每个数字引脚
a = Pin(18, Pin.OUT)
b = Pin(13, Pin.OUT)
c = Pin(2, Pin.OUT)
d = Pin(16, Pin.OUT)
e = Pin(17, Pin.OUT)
f = Pin(19, Pin.OUT)
g = Pin(0, Pin.OUT)
dp = Pin(4, Pin.OUT)

G1 = Pin(21, Pin.OUT)
G2 = Pin(22, Pin.OUT)
G3 = Pin(14, Pin.OUT)
G4 = Pin(15, Pin.OUT)
 
##数码管a到dp对应的引脚
d_Pins=[Pin(i,Pin.OUT)  for i in [18,13,2,16,17,19,0,4]]
##数码管段G1、G2、G3、G4对应的引脚
w_Pins=[Pin(i,Pin.OUT)  for i in [21,22,14,15]]
 
number={
    '0':
    [1,1,1,1,1,1,0,0],#0
    '1':
    [0,1,1,0,0,0,0,0],#1
    '2':
    [1,1,0,1,1,0,1,0],#2
    '3':
    [1,1,1,1,0,0,1,0],#3
    '4':
    [0,1,1,0,0,1,1,0],#4
    '5':
    [1,0,1,1,0,1,1,0],#5
    '6':
    [1,0,1,1,1,1,1,0],#6
    '7':
    [1,1,1,0,0,0,0,0],#7
    '8':
    [1,1,1,1,1,1,1,0],#8
    '9':
    [1,1,1,1,0,1,1,0],#9
}
 
def display(num,dp):
    global number
    count=0
    for pin in d_Pins:#显示num的值 
        pin.value(number[num][count])
        count+=1
    if dp==1:
        d_Pins[7].value(0)
def clear():
    for i in w_Pins:
        i.value(0)
    for i in d_Pins:
        i.value(1)
def showData(num):
   #数值的百位、千位、个位和小数位
    d_num=num
    location=d_num.find('.')
    if location>0:
        d_num=d_num.replace('.','')
        while len(d_num)<4:
            d_num='0'+d_num
        for i in range(0,4):
            time.sleep(2)
            clear()
            w_Pins[3-i].value(1)
            if i==location-1:
                display(d_num[i],1)
            else:
                display(d_num[i],0)
    if location<0:
        for i in range(0,4):
            time.sleep(2)
            clear()
            w_Pins[3-i].value(1)
            display(d_num[i],0)
while True:
 
    num='9016'
    showData(num)
```
**6.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/db1ae6b9742a2c5449dd01ded316af1b.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：四位数码管显示数字，并在一个无限循环中重复这些动作。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/664357b63cd9de2c82c524b1e97fbbbb.png)

























## 项目10 8×8点阵屏

**1.项目介绍：**

点阵屏是一种电子数字显示设备，可以显示机器、钟表、公共交通离场指示器和许多其他设备上的信息。在这个项目中，我们将使用ESP32控制8x8点阵屏来逐渐点亮点阵屏上的LED。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/e5d2b82a75e728b09b97cc15056b0287.png)|
| :--: | :--: | :--: |
|ESP32*1|面包板*1|8×8点阵屏*1|
|![图片不存在](./Python/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Python/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)|
|220Ω电阻*8|跳线若干|USB 线*1|

**3.元件知识：**

**8×8点阵：** 是由64个led灯组成，有行共阳极和行共阴极两种，我们的模块是行共阳极的，也就是每一行有一条线将LED的正极连到一起，列就是将LED灯的负极连接到一起，看下图：

![图片不存在](./Python/media/c41aaa44085da33d18ef06727b575091.png)

每个LED被放置在一行和一列的交叉点上。当某一行的电平为1，某列的电平为0时，对应的LED会亮起。如果你想点亮第一个点上的LED，你应该将引脚9设置为高电平，引脚13设置为低电平。如果你想点亮第一排的led，你应该把引脚9设置为高电平，把引脚13、3、4、10、6、11、15和16设置为低电平。如果您想点亮第一列的led，将引脚13设置为低电平，将引脚9、14、8、12、1、7、2和5设置为高电平。

**8×8点阵屏的外部视图如下所示：**

![图片不存在](./Python/media/fec2ed85eb857e75ef5f3692fa6a4325.png)

![图片不存在](./Python/media/1c0b9e68ffa8d605e0b4ee1b36e07d57.png)

![图片不存在](./Python/media/086139dd80ed8bc7b7f291357ec94f4f.png)

**4.项目接线图：**

![图片不存在](./Python/media/38b8f66bb31399c80d56e4bed07b3803.png)

**5.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/c982aaf9952be57c1ab7464bc20deedb.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目10 8×8点阵屏”。然后鼠标左键双击“Project_09_Four_Digit_Digital_Tube.py”。

![图片不存在](./Python/media/f7d5882139281baf930cd2fe3e0ab527.png)

```
from machine import Pin
import time

##定义行引脚并设置为输出.
row1 = Pin(14, Pin.OUT)
row2 = Pin(26, Pin.OUT)
row3 = Pin(4, Pin.OUT)
row4 = Pin(27, Pin.OUT)
row5 = Pin(19, Pin.OUT)
row6 = Pin(16, Pin.OUT)
row7 = Pin(18, Pin.OUT)
row8 = Pin(17, Pin.OUT)
##定义列的引脚并设置为输出
col1 = Pin(32, Pin.OUT)
col2 = Pin(21, Pin.OUT)
col3 = Pin(22, Pin.OUT)
col4 = Pin(12, Pin.OUT)
col5 = Pin(0, Pin.OUT)
col6 = Pin(13, Pin.OUT)
col7 = Pin(33, Pin.OUT)
col8 = Pin(25, Pin.OUT)

##将列的引脚设置为低电平
col1.value(0)
col2.value(0)
col3.value(0)
col4.value(0)
col5.value(0)
col6.value(0)
col7.value(0)
col8.value(0)

##由于点阵的列被设置为低电平，因此当该行的引脚处于高电平时，点阵的对应行将亮起
def Row(d):
    if(d ==1):
        row1.value(1)  #点亮第一条线
    if(d ==2):
        row2.value(1)  #点亮第二条线
    if(d ==3):
        row3.value(1)
    if(d ==4):
        row4.value(1)
    if(d ==5):
        row5.value(1)
    if(d ==6):
        row6.value(1)
    if(d ==7):
        row7.value(1)
    if(d ==8):
        row8.value(1)
    
##关闭格子
def off():
    row1.value(0)
    row2.value(0)
    row3.value(0)
    row4.value(0)
    row5.value(0)
    row6.value(0)
    row7.value(0)
    row8.value(0) 

try:
    print("test...")
    while True:
         for num in range(1,10):  #逐行点亮格子
             Row(num)
             if(num == 9):  #因为晶格只有8行，我在这里限定一下，等于9
                off()      #关闭格子
             time.sleep(0.2)

except:
    pass
```

**6.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/862a9ae1fc75f479d221d3ee5a846e59.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：8x8点阵屏逐渐点亮。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/151e580365b5ce9680defca25d542a72.png)

![图片不存在](./Python/media/d979f0b9a2cd828104fa2155632fe690.png)






















## 项目11 74HC595N控制8个LED

**1.项目介绍：**

在之前的项目中，我们已经学过了怎样点亮一个LED。

ESP32上只有32个IO端口，我们如何点亮大量的led呢? 有时可能会耗尽ESP32上的所有引脚，这时候就需要用移位寄存器扩展它。你可以使用74HC595N芯片一次控制8个输出，而只占用你的微控制器上的几个引脚。你还可以将多个寄存器连接在一起，以进一步扩展输出，在这个项目中，我们将使用ESP32，74HC595芯片和LED制作一个流水灯来了解74HC595芯片的功能。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/44e4bc7bbc88eafd59a57fc4876f6725.png)|![图片不存在](./Python/media/0bec60f258b235ba8a8a332fd1b6e5fe.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|74HC595N芯片*1|红色LED*8|
|![图片不存在](./Python/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Python/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)| |
|220Ω电阻*8|跳线若干|USB 线*1| |

**3.元件知识：**

![图片不存在](./Python/media/46bf6b6fb5968bea5b7fd226a6f95567.png)

**74HC595N芯片：** 简单来说就是具有8 位移位寄存器和一个存储器，以及三态输出功能。移位寄存器和存储器同步于不同的时钟，数据在移位寄存器时钟SCK的上升沿输入，在存储寄存器时钟RCK的上升沿进入的存储寄存器中去。如果两个时钟连在一起，则移位寄存器总是比存储寄存器早一个脉冲。移位寄存器有一个串行移位输入端（SI）和一个用于级联的串行输出端（SQH）,8位移位寄存器可以异步复位（低电平复位），存储寄存器有一个8位三态并行的总线输出，当输出使能（OE）被使能（低电平有效）将存储寄存器中输出至74HC595N的引脚（总线）。

**引脚说明：**

| 引脚： | 引脚说明： |
| :--: | :--: |
| 13引脚OE|	是一个输出使能引脚，用于确保锁存器的数据是否输入到Q0-Q7引脚。在低电平时，不输出高电平。在本实验中，我们直接连接GND，保持低电平输出数据。|
|14引脚SI/DS|这是74HC595接收数据的引脚，即串行数据输入端，一次只能输入一位，那么连续输入8次，就可以组成一个字节了。|
|10引脚SCLR/MR|一个初始化存储寄存器管脚的管脚。在低电平时初始化内部存储寄存器。在这个实验中，我们连接VCC以保持高水平。|
|11引脚SCK/SH_CP|移位寄存器的时钟引脚，上升沿时，移位寄存器中的数据整体后移，并接收新的数据输入。|
|12引脚RCK/ST_CP|存储寄存器的时钟输入引脚。上升沿时，数据从移位寄存器转存到存储寄存器中。这时数据就从Q0~Q7端口并行输出。|
|9引脚SQH|引脚是一个串行输出引脚，专门用于芯片级联，接下一个74HC595的SI端。|
|Q0--Q7(15引脚，1-7引脚)|八位并行输出端，可以直接控制数码管的8个段。|

**4.项目接线图：**

<span style="color: rgb(255, 76, 65);">注意：</span>需要注意74HC595N芯片插入的方向。

![图片不存在](./Python/media/9b0649bf40ed46557baabcf617c69804.png)

![图片不存在](./Python/media/cc4e68fb791ca0f40d0e6554d43b1ab2.png)

**5.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/c982aaf9952be57c1ab7464bc20deedb.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目11 74HC595N控制8个LED”。选择“my74HC595\.py”，鼠标右键单击选择 “上传到/”，等待“my74HC595\.py”被上传到ESP32，然后鼠标左键双击“Project_11_74HC595N_Controls_8_LEDs.py”。

![图片不存在](./Python/media/482d18bfbe6bf6d2e0ef21d54c0f4ebc.png)

![图片不存在](./Python/media/7910b3fa47e7049819f9b282129a1ebc.png)

```
## 导入time和my74HC595库.
from my74HC595 import Chip74HC595
import time

## 创建Chip74HC595对象并配置引脚
chip = Chip74HC595(14, 12, 13)
## ESP32-14: 74HC595-DS(14)
## ESP32-12: 74HC595-STCP(12)
## ESP32-13: 74HC595-SHCP(11)

##第一个for循环使LED从左到右分别点亮
##而第二个for循环使它从右向左分别点亮.
while True:
    x = 0x01
    for count in range(8):
        chip.shiftOut(1, x)
        x = x<<1;
        time.sleep_ms(300)
    x = 0x01
    for count in range(8):
        chip.shiftOut(0, x)
        x = x<<1
        time.sleep_ms(300)
```
**6.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/4c8f401dc6b1d34a774a4d2dfc226bea.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：8个LED开始以流水模式闪烁。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/ddbf101a5e86e907a994b246b5b5f2ab.png)

![图片不存在](./Python/media/de7ef1d58423282ec05b12fdc0af0292.png)


















## 项目12 有源蜂鸣器

**1.项目介绍：**

有源蜂鸣器是一个发声组件。它被广泛用作电脑、打印机、报警器、电子玩具、电话、计时器等的发声元件。它有一个内在的振动源，只需连接5V电源，即可持续发出嗡嗡声。在这个项目中，我们将使用ESP32控制有源蜂鸣器发出“滴滴”声。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/a802ce7dc086858873e587c19b45578d.png)|![图片不存在](./Python/media/6c3a06627faa0d87dd69cbd361929240.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|有源蜂鸣器*1|NPN型晶体管(S8050)*1|
|![图片不存在](./Python/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Python/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)| |
|1KΩ电阻*1|跳线若干|USB线*1| |

**3.元件知识：**

![图片不存在](./Python/media/7ac473b007da81c891ca12b4c82fac4a.png)

**有源蜂鸣器：** 它内部有一个简单的振荡器电路，可以将恒定的直流电转换成特定频率的脉冲信号。一旦有源蜂鸣器收到一个高电平，它将产生声音。而无源蜂鸣器是一种内部没有振动源的集成电子蜂鸣器，它必须由2K-5K方波驱动，而不是直流信号。这两个蜂鸣器的外观非常相似，但是一个带有绿色电路板的蜂鸣器是无源蜂鸣器，而另一个带有黑色胶带的是有源蜂鸣器。无源蜂鸣器不能区分正极性而有源蜂鸣器是可以。如下所示：

![图片不存在](./Python/media/a33496a4d5eb90ea4d980459d7654b0f.png)

![图片不存在](./Python/media/6c3a06627faa0d87dd69cbd361929240.png)

**晶体管:** 由于蜂鸣器需要很大的电流，ESP32输出能力的GPIO不能满足要求，这里需要一个NPN型晶体管来放大电流。晶体管，全称:半导体晶体管，是一种控制电流的半导体器件。晶体管可以用来放大微弱信号，也可以用作开关。它有三个电极(pin)：基极(b)，集电极(c)和发射极(e)。当电流通过“be”之间时，“ce”将允许几倍的电流通过(晶体管放大)，此时，晶体管在放大区工作。当“be”之间的电流超过某个值时，“ce”将不再允许电流增加，此时晶体管工作在饱和区。晶体管有两种类型如下所示：PNP和NPN

![图片不存在](./Python/media/96deb6c440780b1bc8acde29ef214727.png)

<span style="color: rgb(255, 76, 65);">在我们的套件中，PNP晶体管标记为8550, NPN晶体管标记为8050。</span>

基于晶体管的特性，它常被用作数字电路中的开关。由于单片机输出电流的能力很弱，我们将使用晶体管来放大电流和驱动大电流的元件。在使用NPN晶体管驱动蜂鸣器时，通常采用以下方法：如果GPIO输出高电平，电流将流过R1，晶体管将传导，蜂鸣器将发出声音。如果GPIO输出低电平，没有电流流过R1，晶体管就不会传导，蜂鸣器也不会响。在使用PNP晶体管驱动蜂鸣器时，通常采用以下方法：如果GPIO输出低电平，电流将流过R1，晶体管将传导，蜂鸣器将发出声音。如果GPIO输出高电平，没有电流流过R1，晶体管就不会传导，蜂鸣器也不会响。

![图片不存在](./Python/media/05d42ad7919cc237e007cd2457aacd7c.png)

**4.项目接线图：**

![图片不存在](./Python/media/45b50e33587ccd6c5c2b5af7c7ba7658.png)

<span style="color: rgb(255, 76, 65);">注意：该电路中蜂鸣器的电源为5V。在3.3V的电源下，蜂鸣器可以工作，但会降低响度。</span>

**5.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/c982aaf9952be57c1ab7464bc20deedb.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目12 有源蜂鸣器”。并鼠标左键双击“Project_12_Active_Buzzer.py”。

![图片不存在](./Python/media/4247d76bfa04ddb52dabe47c52915343.png)

```
from machine import Pin
import time

buzzer = Pin(15, Pin.OUT)   # 创建引脚15为蜂鸣器对象，设置引脚15为输出

try:
    while True:
        buzzer.value(1)    # 蜂鸣器鸣叫
        time.sleep(0.5) # 延时 0.5s
        buzzer.value(0)    # 蜂鸣器关闭
        time.sleep(0.5) # 延时 0.5s
except:
    pass

```
**6.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/6b3c5932bef7837f22d518c711ae0cc9.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：有源蜂鸣器发出“滴滴”声。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/00c01c9e54b7d080ab4d792a5a788c41.png)

![图片不存在](./Python/media/4d1cee558b3cb395234d05214995c631.png)














## 项目13 无源蜂鸣器

**1.项目介绍** 

在之前的项目中，我们研究了有源蜂鸣器，它只能发出一种声音，可能会让你觉得很单调。这个项目将学习另一种蜂鸣器，无源蜂鸣器。与有源蜂鸣器不同，无源蜂鸣器可以发出不同频率的声音。在这个项目中，你将使用ESP32控制无源蜂鸣器工作。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/8b2bc33166824a904168c38b960fe574.png)|![图片不存在](./Python/media/6c3a06627faa0d87dd69cbd361929240.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|无源蜂鸣器*1|NPN型晶体管(S8050)*1|
|![图片不存在](./Python/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Python/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)| |
|1KΩ电阻*1|跳线若干|USB线*1| |

**3.元件知识：**

![图片不存在](./Python/media/352568cc59e03453c9433f866631bf50.png)  

**无源蜂鸣器：** 它是一种内部没有振动源的集成电子蜂鸣器。它必须由2K-5K方波驱动，而不是直流信号。与有源蜂鸣器的外观非常相似，但是一个带有绿色电路板的蜂鸣器是无源蜂鸣器，而另一个带有黑色胶带的是有源蜂鸣器。无源蜂鸣器不能区分正极性而有源蜂鸣器是可以，如下图：

![图片不存在](./Python/media/9e2535b132d6c88b45b2b8dfdf6dbda4.png)

**晶体管:** 请参考**项目12** 。

**4.项目接线图:**

![图片不存在](./Python/media/9116a43de7b0f2dc1cdb0496468706f3.png)

**5.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/c982aaf9952be57c1ab7464bc20deedb.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目13 无源蜂鸣器”。并鼠标左键双击“Project_13_Passive_Buzzer.py”。

![图片不存在](./Python/media/632851087ab9639a41b47aaa07d1a1ef.png)

```
from machine import Pin
import time

## 初始化无源蜂鸣器
buzzer = Pin(15,Pin.OUT)

##模拟两种不同的频率
while True:
    #输出500HZ频率声音
    for i in range(80):
        buzzer.value(1)
        time.sleep(0.001)
        buzzer.value(0)
        time.sleep(0.001)
    #输出250HZ频率声音
    for i in range(100):
        buzzer.value(1)
        time.sleep(0.002)
        buzzer.value(0)
        time.sleep(0.002)
```
**6.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/dd5a75569c97a5dca1beed48e384351e.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：无源蜂鸣器发出警报声。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/850e5aef460519ca88fa505e4fafaa74.png)

![图片不存在](./Python/media/d949fe608e1e996cb1d2b525183dbf18.png)





















## 项目14 小台灯

**1.项目介绍：**

你知道ESP32可以在你按下外接按键的时候点亮LED吗? 在这个项目中，我们将使用ESP32，一个按键开关和一个LED来制作一个迷你台灯。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/4c27c3e6c2224e12fd1bd298669f700c.png)|
| :--: | :--: | :--: |
|ESP32*1|面包板*1|按键*1|
|![图片不存在](./Python/media/b3484a63586f907a33f23fa001c874ee.png)|![图片不存在](./Python/media/e8726e55ebfb8e7520e615575ce89204.png)|![图片不存在](./Python/media/11f324f82f890b0691f134e1ea7a3765.png)|
|10KΩ电阻*1|红色 LED*1|220Ω电阻*1|
|![图片不存在](./Python/media/4214d58466508ada517d241d46485b7b.png)| ![图片不存在](./Python/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)|
|按键帽*1|跳线若干|USB 线*1|

**3.元件知识：**

![图片不存在](./Python/media/50b8a411811e86cb4204a2e0377282f4.png)

**按键：** 按键可以控制电路的通断，把按键接入电路中，不按下按键的时候电路是断开的，
一按下按键电路就通啦，但是松开之后就又断了。可是为什么按下才通电呢？这得从按键的内部构造说起。没按下之前，电流从按键的一端过不去另一端；按下的时候，按键内部的金属片把两边连接起来让电流通过。

按键内部结构如图：![图片不存在](./Python/media/013b1897a0308c71d7e5ed0eaf64198d.png)，未按下按键之前，1、2就是导通的，3、4也是导通的，但是1、3或1、4或2、3或2、4是断开（不通）的；只有按下按键时，1、3或1、4或2、3或2、4才是导通的。
在设计电路时，按键开关是最常用的一种元件。

**按键的原理图:**

![图片不存在](./Python/media/00096ba2b3cb95b8d02e075261acb181.png)
  
**什么是按键抖动？**
我们想象的开关电路是“按下按键-立刻导通”“再次按下-立刻断开”，而实际上并非如此。

按键通常采用机械弹性开关，而机械弹性开关在机械触点断开闭合的瞬间（通常 10ms左右），会由于弹性作用产生一系列的抖动，造成按键开关在闭合时不会立刻稳定的接通电路，在断开时也不会瞬时彻底断开。

![图片不存在](./Python/media/c4d829daa9d08e80d4538b901c700b8c.png)

**那又如何消除按键抖动呢？**

常用除抖动方法有两种：软件方法和硬件方法。这里重点讲讲方便简单的软件方法。
我们已经知道弹性惯性产生的抖动时间为10ms 左右，用延时命令推迟命令执行的时间就可以达到除抖动的效果。

所以我们在代码中加入了0.02秒的延时以实现按键防抖的功能。

![图片不存在](./Python/media/3591ca9171277a78bf782c32525e1812.png)

**4.项目接线图：**

![图片不存在](./Python/media/79c310407b3091e58739fda1c916f412.png)

<span style="color: rgb(255, 76, 65);">注意: </span>

怎样连接LED 

![图片不存在](./Python/media/cbb16ef4d8cb62a4001d1a05ae3ac615.png)

怎样识别五色环220Ω电阻和五色环10KΩ电阻

![图片不存在](./Python/media/951ce7d7778b34bf8fbdb3de1b8c3116.png)

![图片不存在](./Python/media/2d3f0996515352c92c07d17e074e7308.png)

**5.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/c982aaf9952be57c1ab7464bc20deedb.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目14 小台灯”。并鼠标左键双击“Project_14_Mini_Table_Lamp.py”。

![图片不存在](./Python/media/fb60129ab1d5ce808d15cb3a9fe6495e.png)

```
from machine import Pin
import time

led = Pin(4, Pin.OUT) # 创建引脚4为LED对象，设置引脚4为输出                  
button = Pin(15, Pin.IN, Pin.PULL_UP) #Pin15创建引脚15按钮对象，设置GP15为输入

##定义一个函数并将其命名为reverseGPIO()，用于反转LED的输出电平
def reverseGPIO():
    if led.value():
        led.value(0)     #LED熄灭
    else:
        led.value(1)     #LED点亮

try:
    while True:
        if not button.value():
            time.sleep_ms(20)
            if not button.value():
                reverseGPIO()
                while not button.value():
                    time.sleep_ms(20)
except:
    pass

```
**6.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/20241025192401.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：按下按钮，LED亮起；当按钮松开时，LED仍亮着。再次按下按钮，LED熄灭；当按钮释放时，LED保持关闭。是不是很像个小台灯？按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/c961a68484f5b1e06bd74815a01b746d.png)

![图片不存在](./Python/media/cba65f3e78fc23732983efae1f0441e4.png)















## 项目15 模拟沙漏

**1.项目介绍：**

古代人没有电子时钟，就发明了沙漏来测时间，沙漏两边的容量比较大，在一边装了细沙，中间有个很小的通道，将沙漏直立，有细沙的一边在上方，由于重力的作用，细沙就会往下流通过通道到沙漏的另一边，当细沙都流到下边了，就倒过来，把一天反复的次数记录下来，第二天就可以通过沙漏反复流动的次数而知道这一天大概的时间了。这一课我们将利用ESP32控制倾斜开关和LED灯来模拟沙漏，制作一个电子沙漏。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/01c1502f7cc76c09d4d77410dcdd31a6.png)|![图片不存在](./Python/media/b3484a63586f907a33f23fa001c874ee.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|倾斜开关*1|10KΩ电阻*1|
|![图片不存在](./Python/media/e8726e55ebfb8e7520e615575ce89204.png)|![图片不存在](./Python/media/11f324f82f890b0691f134e1ea7a3765.png)| ![图片不存在](./Python/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)|
|红色 LED*4|220Ω电阻*1|跳线若干|USB 线*1|

**3.元件知识：**

![图片不存在](./Python/media/966683cc81a185103df1862a16d7a844.png)

倾斜开关也叫数字开关，里面有一个可以滚动的金属球，采用金属球滚动与底部导电板接触的原理来控制电路的通断。倾斜开关是滚珠型倾斜感应单方向性触发开关，当倾斜传感器向触发端（两根金属脚端）倾斜时，倾斜开关处于闭路状态，模拟端口的电压约为5V(二进制数为1023)，这样，LED会亮起。当倾斜开关在水平位置或向另一端倾斜时，倾斜开关处于开路状态，模拟端口的电压约为0V(0二进制)，LED将会关闭。

在程序中，我们根据模拟端口的电压值，是否大于2.5V(512二进制)来判断开关是开还是关。

这里用倾斜开关的内部结构来说明它是如何工作的，显示如下图：

![图片不存在](./Python/media/ed8fb48d5fbce7033fad9ffa5de67808.png)

**4.项目接线图：**

![图片不存在](./Python/media/02d5f7df75aa8062f7b9399a47ae4285.png)

<span style="color: rgb(255, 76, 65);">注意: </span>

怎样连接LED 

![图片不存在](./Python/media/cbb16ef4d8cb62a4001d1a05ae3ac615.png)

怎样识别五色环220Ω电阻和五色环10KΩ电阻

![图片不存在](./Python/media/951ce7d7778b34bf8fbdb3de1b8c3116.png)

![图片不存在](./Python/media/2d3f0996515352c92c07d17e074e7308.png)

**5.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/c982aaf9952be57c1ab7464bc20deedb.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目15 模拟沙漏”。并鼠标左键双击“Project_15_Tilt_And_LED.py”。

![图片不存在](./Python/media/3104100344c7e14bfe9d364cc7c9636e.png)

```
from machine import Pin
import time

led1 = Pin(16, Pin.OUT) # 创建引脚2为LED对象，设置引脚2为输出
led2 = Pin(17, Pin.OUT) # 创建引脚17为LED对象，设置引脚17为输出
led3 = Pin(18, Pin.OUT) # 创建引脚18为LED对象，设置引脚18为输出
led4 = Pin(19, Pin.OUT) # 创建引脚19为LED对象，设置引脚19为输出
Tilt_Sensor = Pin(15,Pin.IN) #创建引脚15倾斜传感器对象，设置GP15为输入

while True:
    if(Tilt_Sensor.value() == 0) : #如果倾斜传感器的值为0时
        led1.value(1) # led1 点亮
        time.sleep_ms(200)#延时
        led2.value(1) # led2 点亮
        time.sleep_ms(200)#延时
        led3.value(1) # led3 点亮
        time.sleep_ms(200)#延时
        led4.value(1) # led4 点亮
        time.sleep_ms(200)#延时
    else :           #如果倾斜传感器的值为1时
        led4.value(0) # led4 熄灭
        time.sleep_ms(200)#延时
        led3.value(0) # led3 熄灭
        time.sleep_ms(200)#延时
        led2.value(0) # led2 熄灭
        time.sleep_ms(200)#延时
        led1.value(0) # led1 熄灭
        time.sleep_ms(200)#延时
```

**6.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/de48f821c2438f9b7563d0685f9c7a88.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：将面包板倾斜到一定角度，led就会一个一个地亮起来。当回到上一个角度时，led会一个一个关闭。就像沙漏一样，随着时间的推移，沙子漏了出来。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/a9906599620f512f6d8f7fd15bd10065.png)

![图片不存在](./Python/media/2db9ee9bf59debc53c46aa954da31d47.png)

































## 项目16 I2C 128×32 LCD

**1.项目介绍：**

在生活中，我们可以利用显示器等模块来做各种实验。你也可以DIY各种各样的小物件。例如，用一个温度传感器和显示器做一个温度测试仪，或者用一个超声波模块和显示器做一个距离测试仪。

下面，我们将使用LCD_128X32_DOT模块作为显示器，将其连接到ESP32控制板上。将使用ESP32主板控制LCD_128X32_DOT显示屏显示各种英文字母、常用符号和数字等。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/c4b08ad87310ea27bc06383257cc7f8f.png)|
| :--: | :--: | :--: |
|ESP32*1|面包板*1|LCD_128X32_DOT*1|
|![图片不存在](./Python/media/4191d5454859076aa2a6c069185be177.png)|![图片不存在](./Python/media/2266d29566a875c35c2bd4be3e4a23f8.png)|  |
|4P转杜邦线公单*1|USB 线*1|  |

**3.元件知识：**

![图片不存在](./Python/media/c4b08ad87310ea27bc06383257cc7f8f.png)

**LCD_128X32_DOT：** 一个像素为128*32的液晶屏模块，它的驱动芯片为ST7567A。模块使用IIC通信方式，它不仅可以显示英文字母、符号，还可以显示中文文字和图案。使用时，还可以在代码中设置，让英文字母和符号等显示不同大小。

**LCD_128X32_DOT原理图：**

![图片不存在](./Python/media/a6f56f3c6481d37dc0dcf9cf74587781.png)

**LCD_128X32_DOT技术参数：**

显示像素：128*32 字符

工作电压：DC 5V

工作电流：100mA (5V)

模块最佳工作电压：5V

亮度、对比度可通过程序指令控制

**4.项目接线图：**

![图片不存在](./Python/media/229ce4e1ad8b01c71577d8f777e8195b.png)

**5.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/7027a20670057a41bfceb82445820d13.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目17 I2C 128×32 LCD”。分别选择“lcd128_32\.py”和 “lcd128_32_fonts\.py”，右键单击鼠标选择 “上传到/”，等待“lcd128_32\.py”和 “lcd128_32_fonts\.py”被上传到ESP32，并鼠标鼠标左键双击“Project_16_I2C_128_32_LCD.py”。

![图片不存在](./Python/media/f6e2793480a0d06c1d605490d8f52340.png)

![图片不存在](./Python/media/1f216cd268b5da81af0ba99597556656.png)

![图片不存在](./Python/media/28cc8875ba670fd680e702030428d352.png)

```
import machine
import time
import lcd128_32_fonts
from lcd128_32 import lcd128_32

##i2c配置
clock_pin = 22
data_pin = 21
bus = 0
i2c_addr = 0x3f
use_i2c = True

def scan_for_devices():
    i2c = machine.I2C(bus,sda=machine.Pin(data_pin),scl=machine.Pin(clock_pin))
    devices = i2c.scan()
    if devices:
        for d in devices:
            print(hex(d))
    else:
        print('no i2c devices')


if use_i2c:
    scan_for_devices()
    lcd = lcd128_32(data_pin, clock_pin, bus, i2c_addr)


lcd.Clear()

lcd.Cursor(0, 4)
lcd.Display("KEYESTUDIO")
lcd.Cursor(1, 0)
lcd.Display("ABCDEFGHIJKLMNOPQR")
lcd.Cursor(2, 0)
lcd.Display("123456789+-*/<>=$@")
lcd.Cursor(3, 0)
lcd.Display("%^&(){}:;'|?,.~\\[]")
"""
while True:
    scan_for_devices()
    time.sleep(0.5)
"""
```
**6.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/7b5fe8311cc696a95e2436fcda1f2a41.png)。

![图片不存在](./Python/media/0fb08205df09e910c1e96cb93e1e2470.png)

单击![图片不存在](./Python/media/20241025191529.png)，代码开始执行，你会看到的现象是：128X32LCD模块显示屏第一行显示“KEYESTUDIO”、第二行显示“ABCDEFGHIJKLMNOPQR”、第三行显示“123456789+-*/<>=$@”、第四行显示“%^&(){}:;'|?,.~\\[]”。按“Ctrl+C”或单击![图片不存在](./Python/media/7b5fe8311cc696a95e2436fcda1f2a41.png)退出程序。

![图片不存在](./Python/media/d0b043ec5fb0e6e2206aaddeafc6bc40.png)

![图片不存在](./Python/media/eeada568b7ef98fefa27e9f22435befd.png)


























## 项目17 小风扇

**1.项目介绍：**

在炎热的夏季，需要电扇来给我们降温，那么在这个项目中，我们将使用ESP32控制直流电机和小扇叶来制作一个小电扇。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/dae45d195fded43701882b0f36f21b98.png)|![图片不存在](./Python/media/c562656c96657983e724daed7c8d6202.png)|![图片不存在](./Python/media/20241025193148.png)|
| :--: | :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|直流电机*1|面包板专用电源模块*1|6节5号电池盒*1|
|![图片不存在](./Python/media/6c3a06627faa0d87dd69cbd361929240.png)|![图片不存在](./Python/media/6c3a06627faa0d87dd69cbd361929240.png)|![图片不存在](./Python/media/20241025193056.png)|![图片不存在](./Python/media/20241025193346.png)|![图片不存在](./Python/media/ed228ff5627e0c8cc0c79fa04f1d4d16.png)|
|NPN型晶体管(S8050)*1|PNP型晶体管(S8550)*1|1KΩ 电阻*1|二极管*1|三叶软桨*1|
|![图片不存在](./Python/media/4107849550a2c6d09592b2a28e291b54.png)|![图片不存在](./Python/media/20241025193442.png)|![图片不存在](./Python/media/2266d29566a875c35c2bd4be3e4a23f8.png)|  |  |
|跳线若干|5号电池(<span style="color: rgb(255, 76, 65);">自备</span>)*6|USB 线*1|  |  |

**3.元件知识:**


**二极管：** 它是用半导体材料(硅、硒、锗等)制成的一种电子器件。它有两个电极，正极，又叫阳极；负极，又叫阴极，给二极管两极间加上正向电压时，二极管导通， 加上反向电压时，二极管截止。 二极管的导通和截止，则相当于开关的接通与断开。

灰色圈一端为负极，则另一端为正极，如下图所示：

![图片不存在](./Python/media/1a0eeedb91bbad682badb3f1884ef050.png)

二极管具有单向导电性能，导通时电流方向是由阳极通过管子流向阴极。

**面包板专用电源模块：**

![图片不存在](./Python/media/c562656c96657983e724daed7c8d6202.png)

**说明：**

此模块，能方便的给面包板提供3.3V和5V的电源，具有DC2.1输入（DC7－12V），另外，具备USB Type C接口的电源输入。

**规格：** 

 输入电压：DC座：7-12V；  Type C USB：5V 

 电流：3.3V：最大500mA；        5V：最大500mA；

 最大功率: 2.5W

 尺寸: 53mmx26.3mm

 环保属性: ROHS

**接口说明：**

![图片不存在](./Python/media/9ab1fa7ff5eccecdc0fe6218fad6df79.png)

**原理图：**

![图片不存在](./Python/media/5139ee652d196f215b53c35d8ab24166.png)

**4. 项目接线图1：**

<span style="color: rgb(255, 76, 65);">（这个实验是使用S8050（NPN型晶体管）控制电机）</span>

![图片不存在](./Python/media/bff2df6024667c53eee4f26a7b074911.png)

(<span style="color: rgb(255, 76, 65);">注: 先接好线，然后在直流电机上安装一个小风扇叶片。</span>)

**5. 项目代码1：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/7027a20670057a41bfceb82445820d13.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目17 小风扇”。并鼠标左键双击“Project_17.1_ Small_Fan.py”。

![图片不存在](./Python/media/ecf7c3ab218e2bc06f7f1b1359ab8bff.png)

```
from machine import Pin
import time

motor = Pin(15, Pin.OUT)   # create S8050 object from Pin 15, Set Pin 15 to output

try:
    while True:
        motor.value(1)    # Set motor turn on
        time.sleep(4) # Sleep 4s
        motor.value(0)    # Set motoe turn off
        time.sleep(2) # Sleep 2s
except:
    pass

```

**6. 项目现象1：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/7b5fe8311cc696a95e2436fcda1f2a41.png)。

![图片不存在](./Python/media/5d160a56a8cdcdb700907a809ca2cec4.png)

单击![图片不存在](./Python/media/20241025191529.png)，代码开始执行，你会看到的现象是：小风扇转4秒，停止2秒，以此规律重复执行。按“Ctrl+C”或单击![图片不存在](./Python/media/7b5fe8311cc696a95e2436fcda1f2a41.png)退出程序。

![图片不存在](./Python/media/ea0446f5060d10ded9bab00f2ef546fc.png)

![图片不存在](./Python/media/3fa9f68a6dae4cc181e84774f7ba3db4.png)

**7. 项目接线图2：**

<span style="color: rgb(255, 76, 65);">（这个实验是使用S8550（PNP型晶体管）控制电机）</span>

![图片不存在](./Python/media/48132a2a51ed288bd3329358690883b3.png)

(<span style="color: rgb(255, 76, 65);">注: 先接好线，然后在直流电机上安装一个小风扇叶片。</span>)

**8. 项目代码2：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/7027a20670057a41bfceb82445820d13.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目17 小风扇”。并鼠标左键双击“Project_17.2_ Small_Fan.py”。

![图片不存在](./Python/media/53eb31b724467fbb1b8d7a852ea4a333.png)

```
from machine import Pin
import time

motor = Pin(15, Pin.OUT)   # create S8550 object from Pin 15, Set Pin 15 to output

try:
    while True:
        motor.value(0)    # Set motor turn on
        time.sleep(4) # Sleep 4s
        motor.value(1)    # Set motoe turn off
        time.sleep(2) # Sleep 2s
except:
    pass
```
**9. 项目现象2：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/7b5fe8311cc696a95e2436fcda1f2a41.png)。

![图片不存在](./Python/media/31e5c67a477a2b1ff1d72489b9a54118.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：小风扇转4秒，停止2秒，以此规律重复执行。按“Ctrl+C”或单击![图片不存在](./Python/media/7b5fe8311cc696a95e2436fcda1f2a41.png)退出程序。

![图片不存在](./Python/media/00ad393b9d02bea76e0f07f9b1847e58.png)


![图片不存在](./Python/media/8fc203e455a610033b39ef535e470c6c.png)















## 项目18 调光灯

**1.项目介绍：**

电位器是一个带有滑动或旋转触点的三端电阻器，它形成一个可调的分压器。它的工作原理是在均匀电阻上改变滑动触点的位置。在电位器中，整个输入电压被施加到电阻的整个长度上，输出电压是固定触点和滑动触点之间的电压值。在这个项目中，我们将学习使用ESP32读取电位器的值，并结合LED制作一个调光灯。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/20241025193655.png)|![图片不存在](./Python/media/325f351a1cc5c9af86988ddafd03fa19.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|可调电位器*1|红色 LED*1|
|![图片不存在](./Python/media/11f324f82f890b0691f134e1ea7a3765.png)|![图片不存在](./Python/media/2266d29566a875c35c2bd4be3e4a23f8.png)|![图片不存在](./Python/media/4107849550a2c6d09592b2a28e291b54.png) | |  
|220Ω电阻*1|USB 线*1|跳线若干 | |

**3.元件知识：**



![图片不存在](./Python/media/4a10a2fa7d595fb2683977c08657de34.png)

**可调电位器：** 可调电位器是电阻和模拟电子元件的一种，具有0和1两种状态(高电平和低电平)。模拟值不同，其数据状态呈现为1 ~ 1024等线性状态。

**ADC：** ADC是一种电子集成电路，用于将模拟信号(如电压)转换为由1和0组成的数字或二进制形式。我们在ESP32上的ADC的范围是12位，这意味着分辨率是2^12=4096，它表示一个范围(3.3V)将被平均划分为4096份，模拟值的范围对应于ADC值。因此，ADC拥有的比特越多，模拟的分区就越密集，最终转换的精度也就越高。

![图片不存在](./Python/media/8f067a222c20bd1a949bb504f34df15d.png)

分节1:0V—(3.3/4095)V 范围内的模拟量对应数字0;

分节2:(3.3/4095)V—2*(3.3/4095)V 范围内的模拟量对应于数字1;

......

下面的模拟将被相应地划分。换算公式如下：

![图片不存在](./Python/media/66f4a644cdb895d4a7910a3f1ac90ccd.png)

**DAC：** 这一过程的可逆需要DAC，数字到模拟转换器。数字I/O端口可以输出高电平和低电平(0或1)，但不能输出中间电压值，这就是DAC有用的地方。ESP32有两个8位精度的DAC输出引脚GPIO25和GPIO26，可以将VCC(这里是3.3V)分成2^8=256个部分。例如，当数字量为1时，输出电压值为3.3/256×1V，当数字量为128时，输出电压值为3.3/256 ×128=1.65V, DAC的精度越高，输出电压值的精度就越高。

换算公式如下：

![图片不存在](./Python/media/0412cb6efce5c1d33e84aeac0931c402.png)

**ESP32主板上的ADC：** 

ESP32有16个引脚，可以用来测量模拟信号。GPIO引脚序列号和模拟引脚定义如下表所示：

![图片不存在](./Python/media/6e8bbcdf34c3bca663c73236fbb3f83f.png)

**ESP32主板上的DAC：**

![图片不存在](./Python/media/379d9c501ea4dfc829b6b52dba5a13e7.png)

**4.读取电位器的ADC值，DAC值和电压值：**

我们将电位器连接到ESP32的模拟IO口上来读取电位器的ADC值，DAC值和电压值。接线请参照以下接线图：

![图片不存在](./Python/media/669570530b1f544aea810426eff2c4c3.jpg)

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/7027a20670057a41bfceb82445820d13.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。
![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目22 调光灯”。并鼠标左键双击“Project_18.1_Read_Potentiometer_Analog_Value.py”。

![图片不存在](./Python/media/70cc8d4580c334ea44caea505755439d.png)

```
## 导入 Pin, ADC 和DAC 库.
from machine import ADC,Pin,DAC
import time

## 打开并配置0-3.3V的ADC
adc=ADC(Pin(36))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_12BIT)

##每0.1秒读取一次ADC值，将ADC值转换为DAC值并输出，
##并将这些数据打印到“Shell”. 
try:
    while True:
        adcVal=adc.read()
        dacVal=adcVal//16
        voltage = adcVal / 4095.0 * 3.3
        print("ADC Val:",adcVal,"DACVal:",dacVal,"Voltage:",voltage,"V")
        time.sleep(0.1)
except:
    pass
```
确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/7b5fe8311cc696a95e2436fcda1f2a41.png)。

![图片不存在](./Python/media/18dbf99e6acd818931cba984bec89176.png)

单击![图片不存在](./Python/media/20241025191529.png)，代码开始执行，你会看到的现象是：Thonny IDE下的“Shell”窗口将打印出电位器的ADC值，DAC值和电压值，转动电位器手柄时，ADC值，DAC值和电压值发生变化。按“Ctrl+C”或单击![图片不存在](./Python/media/7b5fe8311cc696a95e2436fcda1f2a41.png)退出程序。

![图片不存在](./Python/media/14eb3dc732a020e6a2c8f28f118dd2ad.png)

![图片不存在](./Python/media/8d74c8c0893ae2dac55725890cd4d1af.png)

**5.调光灯的接线图：**

在前面一步，我们读取了电位器的ADC值，DAC值和电压值，现在我们需要将电位器的ADC值转换成LED的亮度，来做成一个亮度可调的灯。见如下所示接线图：

![图片不存在](./Python/media/231f15fcdc1a50e5847ca582872499b6.jpg)

**6.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/7027a20670057a41bfceb82445820d13.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目22 调光灯”。并鼠标左键双击“Project_18.2_Dimming_Light.py”。

![图片不存在](./Python/media/03f83c509e45c89978e9138e9c30d7e2.png)

```
from machine import Pin,PWM,ADC
import time

pwm =PWM(Pin(15,Pin.OUT),1000)
adc=ADC(Pin(36))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_10BIT)

try:
    while True:
        adcValue=adc.read()
        pwm.duty(adcValue)
        print(adc.read())
        time.sleep_ms(100)
except:
    pwm.deinit()
```
**7.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/7b5fe8311cc696a95e2436fcda1f2a41.png)。

![图片不存在](./Python/media/3887ada1f95486b0df7449a355477a35.png)

单击![图片不存在](./Python/media/20241025191529.png)，代码开始执行，你会看到的现象是：转动电位器手柄，LED的亮度会相应地改变。按“Ctrl+C”或单击![图片不存在](./Python/media/7b5fe8311cc696a95e2436fcda1f2a41.png)退出程序。

![图片不存在](./Python/media/3a11fc6db2f0556f0615a292269173ec.png)

![图片不存在](./Python/media/img-20230814100048.png)

![图片不存在](./Python/media/9bb5d9041ac5f0d5a4b20b31291457e6.png)















## 项目19 火焰警报器

**1.项目介绍：**

火灾是一种可怕的灾害，火灾报警系统在房屋，商业建筑和工厂中是非常有用的。在本项目中，我们将使用ESP32控制火焰传感器，蜂鸣器和LED来模拟火灾报警装置。这是一个有意义的创客活动。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/41b3d98fdbcbfb06e20591b80a03d586.png)|![图片不存在](./Python/media/325f351a1cc5c9af86988ddafd03fa19.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|火焰传感器*1|红色 LED*1|
|![图片不存在](./Python/media/a802ce7dc086858873e587c19b45578d.png)|![图片不存在](./Python/media/a487df5effb3b0ae28e7601cad88c97b.png)|![图片不存在](./Python/media/a225cd286d071225ea0261768ac3f418.png)|![图片不存在](./Python/media/8d920d12138bd3b4e62f02cecc2c63a3.png) |
|有源蜂鸣器*1|220Ω电阻*1|10KΩ电阻*1|跳线若干 |
|![图片不存在](./Python/media/6c3a06627faa0d87dd69cbd361929240.png)|![图片不存在](./Python/media/20241025193056.png)|![图片不存在](./Python/media/2266d29566a875c35c2bd4be3e4a23f8.png)| |
|NPN型晶体管(S8050)*1|1kΩ 电阻*1 |USB 线*1| |

**3.元件知识：**

![图片不存在](./Python/media/41b3d98fdbcbfb06e20591b80a03d586.png)

**火焰传感器（红外接收三极管）：** 火焰会发出一定程度的IR光，这种光人眼是看不到的，但我们的红外接收三极管可以检测到它，并提醒微控制器（如ESP32）已经检测到火灾。红外接收三极管可以探测火焰，然后将火焰亮度转换为波动水平信号。红外接收三极管的短引脚是负极，另一个长引脚是正极。我们应该连接短引脚（负极)到5V，连接长引脚(正极)到模拟引脚，一个电阻和GND。如下图所示：

![图片不存在](./Python/media/dde086c54e0343400582892ae91d818a.png)

<span style="color: rgb(255, 76, 65);">注意：</span>火焰传感器应避开日光、汽车头灯、白炽灯直接照射，也不能对着热源(如暖气片、加热器)或空调，以避免环境温度较大的变化而造成误报。同时还易受射频辐射的干扰。

**4.读取火焰传感器的ADC值，DAC值和电压值：**

我们首先用一个简单的代码来读取火焰传感器的ADC值，DAC值和电压值并打印出来。接线请参照以下接线图：

![图片不存在](./Python/media/5c151d185e7967e77ff4a8d3e17331f2.png)

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/7027a20670057a41bfceb82445820d13.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。
![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目23 火焰警报器”。并鼠标左键双击“Project_19.1_Read_Analog_Value_Of_Flame_Sensor.py”。

![图片不存在](./Python/media/242367ca826a76828cb7ac881a12994a.png)

```
## 导入 Pin, ADC and DAC 库.
from machine import ADC,Pin,DAC
import time

## 打开并配置0-3.3V的ADC 
adc=ADC(Pin(36))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_12BIT)

## 每0.1秒读取一次ADC值，将ADC值转换为DAC值并输出，
## 并将这些数据打印到“Shell”. 
try:
    while True:
        adcVal=adc.read()
        dacVal=adcVal//16
        voltage = adcVal / 4095.0 * 3.3
        print("ADC Val:",adcVal,"DACVal:",dacVal,"Voltage:",voltage,"V")
        time.sleep(0.1)
except:
    pass
```
确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/7b5fe8311cc696a95e2436fcda1f2a41.png)。

![图片不存在](./Python/media/e186d400e52028a048a55ce3b14803eb.png)

单击![图片不存在](./Python/media/20241025191529.png)，代码开始执行，你会看到的现象是：Thonny IDE下的”Shell”窗口将打印火焰传感器读取的ADC值，DAC值和电压值，当火焰靠近火焰传感器时，ADC值，DAC值和电压值增大；反之，ADC值，DAC值和电压值减小。按“Ctrl+C”或单击![图片不存在](./Python/media/7b5fe8311cc696a95e2436fcda1f2a41.png)退出程序。

![图片不存在](./Python/media/3e64c71fd3a779dd197cd373f9363c45.png)

![图片不存在](./Python/media/a56341b188a320c4a328dede8bc2f710.png)

**5.火焰报警的接线图：**

接下来，我们将使用火焰传感器和蜂鸣器、LED制作一个有趣的项目——火灾报警装置。当火焰传感器检测到火焰时，LED闪烁，蜂鸣器报警。

![图片不存在](./Python/media/056501565145dc46ce00dfb750d87e9f.png)

**6.项目代码：**

（<span style="color: rgb(255, 76, 65);">注意：代码中的阀值500可以根据实际情况自己重新设置</span>）

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/7027a20670057a41bfceb82445820d13.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目23 火焰警报器”。并鼠标左键双击“Project_19.2_Flame_Alarm.py”。

![图片不存在](./Python/media/5af12063d41aee1424d28abae63bf3c1.png)

```
from machine import ADC, Pin
import time

## 打开并配置0-3.3V的ADC 
adc=ADC(Pin(36))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_12BIT)
## 创建引脚15为LED对象，设置引脚15为输出
led = Pin(15, Pin.OUT) 
## 创建引脚4为蜂鸣器对象，设置引脚4为输出
buzzer = Pin(4, Pin.OUT)   
 
## 如果火焰传感器检测到火焰，蜂鸣器将发出蜂鸣声
##，当模拟值大于500时，LED闪烁
## 否则，蜂鸣器不响，LED熄灭

while True:
    adcVal=adc.read()
    if adcVal >500:
        buzzer.value(1) # 蜂鸣器鸣叫
        led.value(1)    # LED点亮
        time.sleep(0.5) # 延时 0.5s
        buzzer.value(0) # 蜂鸣器关闭
        led.value(0)    
        time.sleep(0.5) # 延时 0.5s
    else:
        buzzer.value(0) # 蜂鸣器关闭
        led.value(0)    # LED熄灭

```
**7.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/7b5fe8311cc696a95e2436fcda1f2a41.png)。

![图片不存在](./Python/media/47b6fd665816ceed95cf6b74be89e950.png)

单击![图片不存在](./Python/media/20241025191529.png)，代码开始执行，你会看到的现象是：当火焰传感器检测到火焰时，LED闪烁，蜂鸣器报警；否则，LED不亮，蜂鸣器不响。按“Ctrl+C”或单击![图片不存在](./Python/media/7b5fe8311cc696a95e2436fcda1f2a41.png)退出程序。

![图片不存在](./Python/media/1e01aef2aae7937afb76db161d8f2dd4.png)

![图片不存在](./Python/media/1790b8a741eea4def3eac4e122049b01.png)











## 项目20 小夜灯

**1.项目介绍：**

传感器或元件在我们的日常生活中是无处不在的。例如，一些公共路灯在晚上会自动亮起，而在白天会自动熄灭。为什么呢? 事实上，这些都是利用了一种光敏元件，可以感应外部环境光强度的元件。晚上，当室外亮度降低时，路灯会自动打开；到了白天，路灯会自动关闭。这其中的原理是很简单的，在本实验中我们使用ESP32控制LED就来实现这个路灯的效果。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/20241025194215.png)|![图片不存在](./Python/media/325f351a1cc5c9af86988ddafd03fa19.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|光敏电阻*1|红色 LED*1|
|![图片不存在](./Python/media/a487df5effb3b0ae28e7601cad88c97b.png)|![图片不存在](./Python/media/a225cd286d071225ea0261768ac3f418.png)|![图片不存在](./Python/media/8d920d12138bd3b4e62f02cecc2c63a3.png) |![图片不存在](./Python/media/2266d29566a875c35c2bd4be3e4a23f8.png)|
|220Ω电阻*1|10KΩ电阻*1|跳线若干 |USB 线*1|

**3.元件知识：**

![图片不存在](./Python/media/20241025194215.png)

光敏电阻：是一种感光电阻，其原理是光敏电阻表面上接收亮度(光)降低电阻，光敏电阻的电阻值会随着被探测到的环境光的强弱而变化。有了这个特性，我们可以使用光敏电阻来检测光强。光敏电阻及其电子符号如下：

![图片不存在](./Python/media/1905cf730948d3735f192c184361e2a2.png)

下面的电路是用来检测光敏电阻电阻值的变化：

![图片不存在](./Python/media/7ad49eab2d60085716bb365d33f055bd.png)

在上述电路中，当光敏电阻的电阻因光强的变化而改变时，光敏电阻与电阻R2之间的电压也会发生变化。因此，通过测量这个电压就可以得到光的强度。本项目是采用上图左边的电路来接线的。 

**4.读取光敏电阻的ADC值，DAC值和电压值：**

我们首先用一个简单的代码来读取光敏电阻的ADC值，DAC值和电压值并打印出来。接线请参照以下接线图：

![图片不存在](./Python/media/c19e5b58e073c49a22dd0fdfdb38d7f7.png)

本教程中使用的代码保存在：“**..\程序代码\Python_代码**” 的路径中。

![图片不存在](./Python/media/7027a20670057a41bfceb82445820d13.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目24 小夜灯”。并鼠标左键双击“Project_20.1_Read_Photosensitive_Analog_Value.py”。

![图片不存在](./Python/media/6dbfec268ee1d9868e23139c197f53c5.png)

```
## 导入 Pin, ADC 和 DAC 库.
from machine import ADC,Pin,DAC
import time

## 打开并配置0-3.3V的ADC
adc=ADC(Pin(36))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_12BIT)

##每0.1秒读取一次ADC值，将ADC值转换为DAC值并输出，
##并将这些数据打印到“Shell”. 
try:
    while True:
        adcVal=adc.read()
        dacVal=adcVal//16
        voltage = adcVal / 4095.0 * 3.3
        print("ADC Val:",adcVal,"DACVal:",dacVal,"Voltage:",voltage,"V")
        time.sleep(0.1)
except:
    pass
```
确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/7b5fe8311cc696a95e2436fcda1f2a41.png)。

![图片不存在](./Python/media/19526b9d08efad15f6dd7aced7f33e42.png)

单击![图片不存在](./Python/media/20241025191529.png)，代码开始执行，你会看到的现象是：Thonny IDE下的”Shell”窗口将打印光敏电阻读取的ADC值，DAC值和电压值，当逐渐减弱光敏电阻所处环境中的光线强度时，ADC值，DAC值和电压值逐渐增大；反之，ADC值，DAC值和电压值逐渐减小。按“Ctrl+C”或单击![图片不存在](./Python/media/7b5fe8311cc696a95e2436fcda1f2a41.png)退出程序。

![图片不存在](./Python/media/e143715fd23d6857c499c48cf3446e2e.png)

![图片不存在](./Python/media/a56341b188a320c4a328dede8bc2f710.png)

**5.光控灯的接线图：**

我们在前面做了一个小小的调光灯，现在我们来做一个光控灯。它们的原理是相同的，即通过ESP32获取传感器的模拟值，然后调节LED的亮度。

![图片不存在](./Python/media/eac0e08c0dde6b435907827d36eb1957.png)

**6.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/7027a20670057a41bfceb82445820d13.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目24 小夜灯”。并鼠标左键双击“Project_20.2_Night_Lamp.py”。

![图片不存在](./Python/media/2e9a61adaedcf22a699b83df09a71f05.png)

```
from machine import Pin,PWM,ADC
import time

pwm =PWM(Pin(15,Pin.OUT),1000)
adc=ADC(Pin(36))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_10BIT)

try:
    while True:
        adcValue=adc.read()
        pwm.duty(adcValue)
        print(adc.read())
        time.sleep_ms(100)
except:
    pwm.deinit()

```
**7.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/7b5fe8311cc696a95e2436fcda1f2a41.png)。

![图片不存在](./Python/media/81caa3bf38770f665d7b2c0a6c73f494.png)

单击![图片不存在](./Python/media/20241025191529.png)，代码开始执行，你会看到的现象是：当减弱光敏电阻所处环境中的光线强度时，LED变亮，反之，LED变暗。按“Ctrl+C”或单击![图片不存在](./Python/media/7b5fe8311cc696a95e2436fcda1f2a41.png)退出程序。

![图片不存在](./Python/media/7499b45179dc7096af345d0e007bffe3.png)

![图片不存在](./Python/media/b640e71ba0840d6f99fb089ab248ca4f.png)













## 项目21 温度仪表

**1.项目介绍：**

热敏电阻是一种电阻，其阻值取决于温度和温度的变化，广泛应用于园艺、家庭警报系统等装置中。因此，我们可以利用这一特性来制作温度计。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/c4b08ad87310ea27bc06383257cc7f8f.png)|![图片不存在](./Python/media/4b024c34465b366d3067277b397e5fc0.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|LCD_128X32_DOT*1|热敏电阻*1|
|![图片不存在](./Python/media/a225cd286d071225ea0261768ac3f418.png)|![图片不存在](./Python/media/4191d5454859076aa2a6c069185be177.png)|![图片不存在](./Python/media/2266d29566a875c35c2bd4be3e4a23f8.png)| ![图片不存在](./Python/media/8d920d12138bd3b4e62f02cecc2c63a3.png) |
|10KΩ电阻*1|4P转杜邦线公单*1|USB 线*1|跳线若干 |

**3.元件知识：**

**热敏电阻：** 热敏电阻是一种温度敏感电阻。当热敏电阻感应到温度的变化时，它的电阻就会发生变化。我们可以利用热敏电阻的这种特性来检测温度强度。热敏电阻及其电子符号如下所示。

![图片不存在](./Python/media/4da14068ab4c20e5e807fdd08a82466f.png)

热敏电阻的电阻值与温度的关系为：

![图片不存在](./Python/media/4efb34b50f2cdb5b2ed6f351ce475474.png)

式中：

Rt为热敏电阻在T2温度下的电阻；

R为热敏电阻在T1温度下的标称阻值；

EXP[n]是e的n次幂；

B为温度指数；

T1，T2是开尔文温度(绝对温度)，开尔文温度=273.15 +摄氏温度。对于热敏电阻的参数，我们使用：B=3950, R=10KΩ，T1=25℃。热敏电阻的电路连接方法与光敏电阻类似，如下所示：

![图片不存在](./Python/media/1ac82d185d19f35348be2eec7717d721.png)

我们可以利用ADC转换器测得的值来得到热敏电阻的电阻值，然后利用公式来得到温度值。因此，温度公式可以推导为：

![图片不存在](./Python/media/7a610a5fe8f27e2000432bcef2f765e9.png)

**4.读取热敏电阻的值：**

首先我们学习热敏电阻读取当前的ADC值、电压值和温度值并将其打印出来。请按下面的接线图接好线：

![图片不存在](./Python/media/aa12d903640a4b579c986272f0f7e163.png)

本教程中使用的代码保存在：“**..\程序代码\Python_代码**” 的路径中。

![图片不存在](./Python/media/7027a20670057a41bfceb82445820d13.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目29 温度仪表”。并鼠标左键双击“Project_21.1_Read_the_thermistor_analog_value.py”。

![图片不存在](./Python/media/1dc1550262d5b2964f05967ccf640bcc.png)

```
from machine import Pin, ADC
import time
import math

##设置 ADC
adc=ADC(Pin(36))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_12BIT)

try:
    while True:
        adcValue = adc.read()
        voltage = adcValue / 4095 * 3.3
        Rt = 10 * voltage / (3.3-voltage)
        tempK = (1 / (1 / (273.15+25) + (math.log(Rt/10)) / 3950))
        tempC = (tempK - 273.15)
        print("ADC value:",adcValue,"  Voltage:",voltage,"V","  Temperature: ",tempC,"C");
        time.sleep(1)
except:
    pass

```
确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/7b5fe8311cc696a95e2436fcda1f2a41.png)。

![图片不存在](./Python/media/b7da32e7136119dbebfa0cb968db3fb5.png)

单击![图片不存在](./Python/media/20241025191529.png)，代码开始执行，你会看到的现象是：Thonny IDE下的”Shell”窗口将不断显示热敏电阻当前的ADC值、电压值和温度值。试着用食指和拇指捏一下热敏电阻(不要碰触导线)一小段时间，你应该会看到温度值增加。按“Ctrl+C”或单击![图片不存在](./Python/media/7b5fe8311cc696a95e2436fcda1f2a41.png)退出程序。

![图片不存在](./Python/media/d20d2e5b4a6f7a714be819cd3c4c3310.png)

![图片不存在](./Python/media/dce1be02bd4a913ba8983434cd1cf3ca.png)

**5.温度仪表的接线图：**

![图片不存在](./Python/media/5b77fc42f5fa8ab213447116da53f777.png)

**6.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/7027a20670057a41bfceb82445820d13.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目29 温度仪表”。分别选择“lcd128_32.py”和 “lcd128_32_fonts.py”，右键单击鼠标选择 “上传到/”，等待“lcd128_32.py”和 “lcd128_32_fonts.py”被上传到ESP32。并鼠标左键双击“Project_21.2_Temperature_Instrument.py”。

![图片不存在](./Python/media/4e42b3fef0e91bed2891febd1eb826d9.png)

![图片不存在](./Python/media/52eea4bb6c068e9da83d76319808eba3.png)

![图片不存在](./Python/media/f29d28b27bcb690d628c49a70c8b3e4d.png)

```
from machine import Pin, ADC, I2C
import machine
import time
import math
import lcd128_32_fonts
from lcd128_32 import lcd128_32

##设置 ADC
adc=ADC(Pin(36))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_12BIT)

##i2c配置
clock_pin = 22
data_pin = 21
bus = 0
i2c_addr = 0x3f
use_i2c = True

def scan_for_devices():
    i2c = machine.I2C(bus,sda=machine.Pin(data_pin),scl=machine.Pin(clock_pin))
    devices = i2c.scan()
    if devices:
        for d in devices:
            print(hex(d))
    else:
        print('no i2c devices')
        
try:
    while True:
        adcValue = adc.read()
        voltage = adcValue / 4095 * 3.3
        Rt = 10 * voltage / (3.3-voltage)
        tempK = (1 / (1 / (273.15+25) + (math.log(Rt/10)) / 3950))
        tempC = int(tempK - 273.15)        
        if use_i2c:
            scan_for_devices()
            lcd = lcd128_32(data_pin, clock_pin, bus, i2c_addr)  
        lcd.Clear()
        lcd.Cursor(0, 0)
        lcd.Display("Voltage:")
        lcd.Cursor(0, 8)
        lcd.Display(str(voltage))
        lcd.Cursor(0, 20)
        lcd.Display("V")
        lcd.Cursor(2, 0)
        lcd.Display("Temperature:")
        lcd.Cursor(2, 12)
        lcd.Display(str(tempC))
        lcd.Cursor(2, 15)
        lcd.Display("C")
        time.sleep(0.5)
except:
    pass
```
**7.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/7b5fe8311cc696a95e2436fcda1f2a41.png)。

![图片不存在](./Python/media/3327c91520fe3eec16305a82b632c869.png)

单击![图片不存在](./Python/media/20241025191529.png)，代码开始执行，你会看到的现象是：LCD 128X32 DOT的屏幕上显示热敏电阻的电压值和当前环境中的温度值。按“Ctrl+C”或单击![图片不存在](./Python/media/7b5fe8311cc696a95e2436fcda1f2a41.png)退出程序。

![图片不存在](./Python/media/845c553fc4f82fbc2387c5980e607750.png)

![图片不存在](./Python/media/073463d882655fe6ab03fdf8ed4c537b.png)









## 项目22 WiFi 工作模式

在如今科技高速发展的时代，人们的生活质量越来越好，生活节奏越来越快，开始有人觉得复杂多样的智能化设备控制起来十分麻烦，通过手机统一控制智能化设备这种方法逐渐得到了人们的青睐。这种方法是利用单片机通过wifi模块和Internet网络建立手机和智能化设备之间的连接以此来实现对智能化设备的远程控制。在本章中，我们将重点关注ESP32的WiFi基础设施。ESP32有3种不同的WiFi工作模式：Station模式、AP模式和AP+Station模式。所有WiFi编程项目在使用WiFi前必须配置WiFi运行模式，否则无法使用WiFi。

**项目22.1: WIFI Station 模式**

**1.实验元件：**

|![图片不存在](./Python/media/2266d29566a875c35c2bd4be3e4a23f8.png)|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|
| :--: | :--: |
| USB 线 x1|ESP32x1|

**2.实验接线：**

使用USB线将ESP32主板连接到电脑上的USB口。

![图片不存在](./Python/media/3e0498944fc51e44b30bb90e2ae86b35.png)

**3.元件知识：**

**Station 模式：** 当ESP32选择Station模式时，它作为一个WiFi客户端。它可以连接路由器网络，通过WiFi连接与路由器上的其他设备通信。如下图所示，PC和路由器已经连接，ESP32如果要与PC通信，需要将PC和路由器连接起来。

![图片不存在](./Python/media/227039c89f94a5ffbc04bca9f9e61e40.png)

**4.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/7027a20670057a41bfceb82445820d13.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目22 WiFi 工作模式”。 并鼠标左键双击“Project_22.1_WiFi_Station_Mode.py”。

![图片不存在](./Python/media/6c5176fc0377aa91425f53533cd2e604.png)

```
import time
import network # 导入 network 库.

ssidRouter     = 'ChinaNet-2.4G-0DF0' # 输入路由器名称
passwordRouter = 'ChinaNet@233' # 输入路由器密码

def STA_Setup(ssidRouter,passwordRouter):
    print("Setup start")
    sta_if = network.WLAN(network.STA_IF) # 设置ESP32为“Station模式”.
    if not sta_if.isconnected():
        print('connecting to',ssidRouter)
  # 激活ESP32的站模式，向路由器发起连接请求
 # 并输入连接密码.      
        sta_if.active(True)
        sta_if.connect(ssidRouter,passwordRouter)
  #等待ESP32与路由器连接成功.      
        while not sta_if.isconnected():
            pass
  # 在Shell中打印分配给ESP32-WROVER的IP地址. 
    print('Connected, IP address:', sta_if.ifconfig())
    print("Setup End")

try:
    STA_Setup(ssidRouter,passwordRouter)
except:
    sta_if.disconnect()

```
**5.项目现象：**

由于各个地方的路由器名称和密码不同，所以在运行代码之前，用户需要在上图所示的红色框中输入正确的路由器名称和密码。

在确认正确输入路由器名和密码后，单击![图片不存在](./Python/media/20241025191529.png)，代码开始执行，等待ESP32连接到你的路由器，在“Shell”窗口中打印路由器分配给ESP32的IP地址。

![图片不存在](./Python/media/0d3989594028cb55bf504a8d81da8985.png)

![图片不存在](./Python/media/a176d6c2026baa6d7b0a702f5ab9627e.png)


**项目22.2：WIFI AP 模式**

**1.实验元件&接线：**

实验元件和实验接线与上面的**项目22.1: WIFI Station 模式**相同。

**2.元件知识：**

**AP模式：** 当ESP32选择AP模式时，会创建一个独立于Internet的热点网络，等待其他WiFi设备连接。如下图所示，以ESP32为热点。如果手机或PC需要与ESP32通信，则必须连接到ESP32的热点。只有通过ESP32建立连接后才能进行通信。

![图片不存在](./Python/media/9117763df4e25fdca6bc7e576bc91ded.png)

**3.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/7027a20670057a41bfceb82445820d13.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目22 WiFi 工作模式”。 并鼠标左键双击“Project_22.2_WiFi_AP_Mode.py”。

![图片不存在](./Python/media/e7b72e67b08de78f6f3cdef7eaa34155.png)

```
import network #导入 network 库.

##请输入正确的路由器名称和密码.
ssidAP         = 'ESP32_Wifi' #输入AP名称
passwordAP     = '12345678'  #输入AP密码

local_IP       = '192.168.1.147'
gateway        = '192.168.1.1'
subnet         = '255.255.255.0'
dns            = '8.8.8.8'

##配置ESP32为AP模式.
ap_if = network.WLAN(network.AP_IF)

def AP_Setup(ssidAP,passwordAP):
    ap_if.ifconfig([local_IP,gateway,subnet,dns])
    print("Setting soft-AP  ... ")
    ap_if.config(essid=ssidAP,authmode=network.AUTH_WPA_WPA2_PSK, password=passwordAP)
    ap_if.active(True)
    print('Success, IP address:', ap_if.ifconfig())
    print("Setup End\n")

try:
    AP_Setup(ssidAP,passwordAP)
except:
    print("Failed, please disconnect the power and restart the operation.")
    ap_if.disconnect()
```
**4.项目现象：**

在程序代码运行之前，你可以像上图所示对红色框中ESP32的AP名称和密码进行任何更改。当然，在默认情况下，你也可以不修改它。

单击![图片不存在](./Python/media/20241025191529.png)，代码开始执行，打开ESP32的AP功能，“Shell”窗口中打印接入点信息。

![图片不存在](./Python/media/79764d034ed968dc56e7ca28fd026992.png)

![图片不存在](./Python/media/5098e039e67c98477b7266d61a1e8adf.png)

观察串口监视器打印信息时，打开手机WiFi扫描功能，可以看到ESP32上的ssid_AP被调用，在本程序代码中称为“ESP32_Wifi”。你可以输入密码“12345678”连接它，也可以通过修改程序代码来修改它的AP名称和密码。

![图片不存在](./Python/media/29b419a83fcc3ddcfa32f08296d8e9f7.png)

**项目35.3：WIFI AP+Station模式**

**1.实验元件&接线：**

实验元件和实验接线与上面的**项目22.1: WIFI Station 模式**和**项目22.2: WIFI AP 模式**相同。

**2.元件知识：**

**AP+Station模式：** ESP32除AP模式和Station模式外，还可以同时使用AP模式和Station模式。此模式包含前两种模式的功能。打开ESP32的Station模式，将其连接到路由器网络，它可以通过路由器与Internet通信。同时开启其AP模式，创建热点网络。其他WiFi设备可以选择连接路由器网络或热点网络与ESP32通信。

**3.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/7027a20670057a41bfceb82445820d13.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目22 WiFi 工作模式”。 并鼠标左键双击“Project_22.3_WiFi_Station+AP_Mode.py”。

![图片不存在](./Python/media/f9ee8f1a6f409785b196639faaf45882.png)

```
import network #导入 network 库.

ssidRouter     = 'ChinaNet-2.4G-0DF0' #输入路由器名称
passwordRouter = 'ChinaNet@233' #输入路由器密码

ssidAP         = 'ESP32_Wifi'#输入AP名称
passwordAP     = '12345678' #输入AP密码

local_IP       = '192.168.4.147'
gateway        = '192.168.1.1'
subnet         = '255.255.255.0'
dns            = '8.8.8.8'

sta_if = network.WLAN(network.STA_IF)
ap_if = network.WLAN(network.AP_IF)
    
def STA_Setup(ssidRouter,passwordRouter):
    print("Setting soft-STA  ... ")
    if not sta_if.isconnected():
        print('connecting to',ssidRouter)
        sta_if.active(True)
        sta_if.connect(ssidRouter,passwordRouter)
        while not sta_if.isconnected():
            pass
    print('Connected, IP address:', sta_if.ifconfig())
    print("Setup End")
    
def AP_Setup(ssidAP,passwordAP):
    ap_if.ifconfig([local_IP,gateway,subnet,dns])
    print("Setting soft-AP  ... ")
    ap_if.config(essid=ssidAP,authmode=network.AUTH_WPA_WPA2_PSK, password=passwordAP)
    ap_if.active(True)
    print('Success, IP address:', ap_if.ifconfig())
    print("Setup End\n")

try:
    AP_Setup(ssidAP,passwordAP)    
    STA_Setup(ssidRouter,passwordRouter)
except:
    sta_if.disconnect()
    ap_if.idsconnect()
```
**4.项目现象：**

它类似于上面的**项目22.1**和**项目22.2**。在运行代码之前，你需要修改ssidRouter、passwordRouter、ssidAP和passwordAP，如上图中的红色框所示。在确保正确修改代码后，单击![图片不存在](./Python/media/20241025191529.png)，代码开始执行，“Shell”窗口中将显示如下：

![图片不存在](./Python/media/29de89c321746b9c295efc456f13e5c0.png)

![图片不存在](./Python/media/6e4bd70fc2b13b9ee6e5884efe0196a3.png)

打开手机的WiFi搜索功能，可以在ESP32上看到ssid_AP被调用。

![图片不存在](./Python/media/29b419a83fcc3ddcfa32f08296d8e9f7.png)










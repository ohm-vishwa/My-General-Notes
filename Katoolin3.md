## install (kali tools) Katoolin3 in Ubuntu
```bash 
git clone https://github.com/s-h-3-l-l/katoolin3
```
```bash
wget -q -O - https://archive.kali.org/archive-key.asc  | apt-key add
```
```bash
cd katoolin3
```
```bash
sudo nano install.sh
```
>[!WARNING] 
> Comment out\
> `#apt-key adv -qq --keyserver pool.sks-keyserver.net.....`

```bash
sudo +x ./install.sh
```
```bash
sudo nano .bashrc
```
> [!IMPORTANT]
> Paste at Bottom
```bash
export PATH=$PATH:~/katoolin3:/usr/bin/python3
```
---
---

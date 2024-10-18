# Linux-Comands
| [Table of Content](https://github.com/ohm-vishwa/Linux-Comands?tab=readme-ov-file#linux-comands)|
|------------|
|[setup auto-cpufreq](https://github.com/ohm-vishwa/Linux-Comands/edit/main/README.md#install-auto-cpu-freq)|
|[Make terminal like look like Parrot OS](https://github.com/ohm-vishwa/Linux-Comands?tab=readme-ov-file#make-terminal-like-look-like-parrot-os)|
|[Install  Gome extension](https://github.com/ohm-vishwa/Linux-Comands?tab=readme-ov-file#install--gome-extension)|
|[Stop Battery Charging at 80% in linux (Asus Laptop)](https://github.com/ohm-vishwa/Linux-Comands?tab=readme-ov-file#stop-battery-charging-at-80-in-linux-asus-laptop)|
|[install (kali tools) Katoolin3 in Ubuntu](https://github.com/ohm-vishwa/Linux-Comands?tab=readme-ov-file#install-kali-tools-katoolin3-in-ubuntu)|
|[Convert .odt to pdf](https://github.com/ohm-vishwa/Linux-Comands?tab=readme-ov-file#convert-odt-to-pdf)|
|[FFmpeg Commands](/ffmpeg.md)|
|[bettercap](/bettercap.md)|
|[]()|

## Install Auto CPU Freq 
```sh
git clone https://github.com/AdnanHodzic/auto-cpufreq.git
cd auto-cpufreq && sudo ./auto-cpufreq-installer
```

## Make terminal like look like Parrot OS
[Parrot Os .bashrc file](/.bashrc)
```bash
sudo nano .bashrc
```
> [!IMPORTANT]
> Paste at bottom

> Similarly,
```bash
sudo nano /root/.bashrc
```

---
 ## Install  Gome extension
```bash
sudo apt update

sudo apt install gnome-shell-extensions chrome-gnome-shell
```

---
 ## Stop Battery Charging at 80% in linux (Asus Laptop) 
> Open
```bash
sudo nano /etc/crontab
```
> paste inside ` /etc/crontab `
```bash
@reboot root echo 80 >  /sys/class/power_supply/BAT0/charge_control_end_threshold
```

---
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
## Convert .odt to pdf
```sh
libreoffice --convert-to pdf *.odt
```
---

# Fix brightness in Ubuntu
```sh
sudo add-apt-repository ppa:apandada1/brightness-controller
sudo apt update
sudo apt install brightness-controller
```
## [GitHub Profile](https://github.com/ohm-vishwa) 
## [YouTube](https://www.youtube.com/@ohm_vishwa)

# Linux-Comands

|Markdown files|
|--------------|
|[react-native](./React-native.md)|
|[ffmpeg](./ffmpeg.md)|
|[hashcat](./hashcat.md)|
|[bettercap](./bettercap.md)|
|[katoolin3](./Katoolin3.md)|

---
---
## Linux Utility
---
---

### Stop Battery Charging at 80% in linux (Asus Laptop) 
 
> Open
```bash
sudo nano /etc/crontab
```
> paste inside ` /etc/crontab `
```bash
@reboot root echo 80 >  /sys/class/power_supply/BAT0/charge_control_end_threshold
```
---
---

> ### Convert .odt to pdf 
```sh
libreoffice --convert-to pdf *.odt
```
---
---

> ### Fix brightness in Ubuntu
```sh
sudo add-apt-repository ppa:apandada1/brightness-controller
sudo apt update
sudo apt install brightness-controller
```
---
---

## [GitHub Profile](https://github.com/ohm-vishwa) 
## [YouTube](https://www.youtube.com/@ohm_vishwa)

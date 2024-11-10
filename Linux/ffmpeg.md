
# FFmpeg Commands

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



# Youtube Dawnloader

Dawnload playlist with quality 1080 
```bash
yt-dlp -f 'bestvideo[height<=1080]+bestaudio/best[height<=1080]' https://youtube.com/playlist
```

Dawnload with skip 
```bash
yt-dlp --playlist-start <no_of_skip> -f 'bestvideo[height<=1080]+bestaudio/best[height<=1080]' https://youtube.com/playlist
```

Download a video:
```bash
yt-dlp https://example.com/video
```

Download best audio:
```bash
yt-dlp -f bestaudio https://example.com/video
```

Convert to MP3:
```bash
yt-dlp --extract-audio --audio-format mp3 https://example.com/video
```

Download a playlist:
```bash
yt-dlp --yes-playlist https://example.com/playlist
```

--- lib_ccx/ffmpeg_intgr.c.orig	2017-11-09 16:32:29.399188000 -0700
+++ lib_ccx/ffmpeg_intgr.c	2017-11-09 16:39:57.319634000 -0700
@@ -3,7 +3,7 @@
 #ifdef ENABLE_FFMPEG
 #include <libavformat/avformat.h>
 #include <libavfilter/avfiltergraph.h>
-#include <libavfilter/avcodec.h>
+#include <libavcodec/avcodec.h>
 #include <libavfilter/buffersink.h>
 #include <libavfilter/buffersrc.h>
 #include <libavutil/avstring.h>

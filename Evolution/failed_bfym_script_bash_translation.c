// Note to self, never use c for creating scripts. Too messy.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 100
#define VIDEOID_SIZE 50
#define VIDEOURL_SIZE 75
#define TITLE_SIZE 100
#define RESULT_SIZE 100

int main() { 
  char search[BUFFER_SIZE];
  char videoId[VIDEOID_SIZE];
  char videoUrl[VIDEOURL_SIZE];
  char title[TITLE_SIZE];
  char result[RESULT_SIZE];

  printf("Input search string: ");
  fgets(search, sizeof(search), stdin);
  search[strcspn(search, "\n")] = '\0';
  if (search[0] != '\0') {
    printf("You are searching for: %s", search);
    printf("yt-dlp --get-id ytsearch1:%s", search);
    printf("https://youtube.com/watch?v=%s", videoId);
    system(videoId);
    printf("yt-dlp ytsearch1:%s", videoUrl);
    system(videoUrl);
    system(result);
    printf("yt-dlp --get-title %s", videoUrl);
    system(title);
  } else {
    printf("Invalid input, please try again");
    exit(0);
  }
  return 0;
}

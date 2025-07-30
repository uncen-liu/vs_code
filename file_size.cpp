#include <stdio.h>
#include <sys/stat.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <file_path>\n", argv[0]);
        return 1;
    }

    const char *file_path = argv[1];
    struct stat file_stat;

    if (stat(file_path, &file_stat) != 0) {
        perror("Failed to get file stats");
        return 1;
    }

    printf("File size: %ld bytes\n", (long)file_stat.st_size);

    return 0;
}
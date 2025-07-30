#include <stdio.h>
#include <stdlib.h>

void copy_file(const char *src, const char *dst) {
    FILE *source = fopen(src, "rb");
    FILE *destination = fopen(dst, "wb");

    if (!source || !destination) {
        perror("Failed to open files");
        exit(1);
    }

    char buffer[1024 * 1024];
    size_t bytes;

    while ((bytes = fread(buffer, 1, sizeof(buffer), source)) > 0) {
        fwrite(buffer, 1, bytes, destination);
    }

    fclose(source);
    fclose(destination);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <src_file> <target_file>\n", argv[0]);
        return 1;
    }

    const char *src_file = argv[1];
    const char *target_file = argv[2];

    copy_file(src_file, target_file);

    printf("File copied successfully from %s to %s\n", src_file, target_file);

    return 0;
}
#include <stdio.h>

int main()
{
    char na[30], ni[30], k[30], ttl[30], a[40], h[30], no[30];

    printf("Nama                :");
    gets(na);
    printf("NIM                 :");
    gets(ni);
    printf("Kelas Paralel       :");
    gets(k);
    printf("Tempat/Tanggal Lahir:");
    gets(ttl);
    printf("Alamat              :");
    gets(a);
    printf("Hobby               :");
    gets(h);
    printf("No. HP              :");
    gets(no);

    printf("\n");
    printf("Nama                :%s\n", na);
    printf("NIM                 :%s\n", ni);
    printf("Kelas Paralel       :%s\n", k);
    printf("Tempat/Tanggal Lahir:%s\n", ttl);
    printf("Alamat              :%s\n", a);
    printf("Hobby               :%s\n", h);
    printf("No. HP              :%s\n", no);
    return 0;
}



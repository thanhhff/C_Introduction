#include <stdio.h>

void tangluong(int luonghientai, int *luongmoi);

int main()
{
    int namcongtac, luonghientai, luongmoi;

    do
    {
        printf("Nhap so nam cong tac: ");
        scanf("%d", &namcongtac);
        if (namcongtac < 3)
            printf("Nhan vien chua du so nam de tang luong!\n");
    } while (namcongtac < 3);

    printf("Nhap so luong hien tai: ");
    scanf("%d", &luonghientai);

    tangluong(luonghientai, &luongmoi);
    printf("Luong moi cua nhan vien la: %d\n", luongmoi);
}

void tangluong(int luonghientai, int *luongmoi)
{
    int tientang;
    printf("Nhap so tien tang them: ");
    scanf("%d", &tientang);
    *luongmoi = luonghientai + tientang;
}
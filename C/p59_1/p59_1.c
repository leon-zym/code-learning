#include <stdio.h>
#include <stdlib.h>
#define N 4

struct Stu
{
    char name[24];
    int num;
    float score;
}stu[N], sb;

int main(void)
{
    FILE *fp;
    int i;

    printf("请开始录入成绩（格式为：姓名 学号 分数）：\n");
    for(i = 0; i < N; i++)
    {
        scanf("%s %d %f", stu[i].name, &stu[i].num, &stu[i].score);
    }

    if((fp = fopen("source.txt", "w")) == NULL)
    {
        printf("文件打开失败！\n");
        exit(EXIT_FAILURE);
    }

    fwrite(stu, sizeof(struct Stu), N, fp);
    fclose(fp);

    if((fp = fopen("source.txt", "r")) == NULL)
    {
        printf("文件打开失败！\n");
        exit(EXIT_FAILURE);
    }

    fseek(fp, sizeof(struct Stu), SEEK_SET);
    fread(&sb, sizeof(struct Stu), 1, fp);

    printf("%s（%d）的分数为：%.2f\n", sb.name, sb.num, sb.score);
    fclose(fp);
}
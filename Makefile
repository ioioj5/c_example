TARGET=test

# SRCS = test.c

# 变量替换函数, 把所有的*.c替换为*.o文件
# OBJS = $(SRCS:.c=.o)

# 指定文件夹
OBJ_DIR = ./objs
SRC_DIR = ./src

OBJS = $(OBJ_DIR)/test.o

# 指令编译器和选项
# -Wall: 输出所有警告信息
# -O: 在编译时进行优化
# -g: 编译Debug版本
CC=gcc
CFLAGS=-Wall -O -g

# $@ TARGET, 当前规则的目标文件
# $< 第一个依赖文件
# $^ OBJECTS, 去除重复的所有依赖文件
$(TARGET):$(OBJS)
	$(CC) -o $@ $^

clean:
	rm -rf $(TARGET) $(OBJS)

$(OBJ_DIR)/%.o:$(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -o $@ -c $<

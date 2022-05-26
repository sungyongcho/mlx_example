opengl:
	clang -L../mlx_opengl -lmlx -framework OpenGL -framework AppKit main.c
	./a.out

mms:
	clang -L../mlx_mms_20210621 -lmlx main.c
	cp ../mlx_mms_20210621/libmlx.dylib .
	./a.out


linux:
	clang -L../mlx -lmlx -framework OpenGL -framework AppKit main.c
	./a.out

clean:
	rm a.out
	rm libmlx.dylib

all: structs structs2 copy

structs: structs.c
	${CC} -Wall structs.c -o structs
	${CC} -Wall -fpack-struct  structs.c -o packed_structs	
	clang -S -emit-llvm structs.c -o structs.ll	
	clang -S -fpack-struct -emit-llvm structs.c -o packed_structs.ll	

structs2: structs2.c
	${CC} -Wall structs2.c -o structs2
	${CC} -Wall -fpack-struct  structs2.c -o packed_structs2	
	clang -S -emit-llvm structs2.c -o structs2.ll	
	clang -S -fpack-struct -emit-llvm structs2.c -o packed_structs2.ll	

copy:
	cp *.ll ../../bitcode



clean:
	rm -f structs packed_structs structs2 packed_structs2  *.ll


compile_flags = -lcurl
output_file = catera
cpp_files = main.cpp api/http.cpp Maths/LongInt/LongInt.hpp Maths/LongInt/Conversation.cpp Maths/LongInt/Compare.cpp Maths/LongInt/Primitive.cpp Maths/LongInt/Sum.cpp Maths/LongInt/Substraction.cpp Maths/LongInt/Multiply.cpp Maths/LongInt/Division.cpp Maths/LongInt/Pow.cpp Maths/LongInt/Factorial.cpp Maths/LongInt/Gcd.cpp Maths/LongInt/Lcm.cpp Maths/LongInt/Isqrt.cpp Maths/LongInt/Icbrt.cpp Maths/LongInt/Random.cpp
res main.cpp:
	time g++ $(compile_flags) $(cpp_files) -o $(output_file)

run:
	g++ $(compile_flags) $(cpp_files) -o $(output_file)
	time ./catera
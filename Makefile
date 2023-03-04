
output_file = catera
output_directory = bin

res main.cpp:
	time cmake -S . -B $(output_directory) && cd $(output_directory) && make && cd ..

run:
	time cmake -S . -B $(output_directory) && cd $(output_directory) && make && cd ..

	# do not delete pwd command!
	# it doesnt affect the build, but without it the programm wont start via `make run`
	time $(output_directory)/$(output_file) && pwd > /dev/null

libs:
	time cd libs/folly && ./build.sh && cd ../..
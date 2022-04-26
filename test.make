TEST_DIR=test/present_test_files

TEST_1 = $(TEST_DIR)/values.go
TEST_2 = $(TEST_DIR)/variable.go
TEST_3 = $(TEST_DIR)/exp_op.go
TEST_4 = $(TEST_DIR)/if_else.go
TEST_5 = $(TEST_DIR)/for.go
TEST_6 = $(TEST_DIR)/io.go
TEST_7 = $(TEST_DIR)/func.go
# TEST_ = $(TEST_DIR)/
# TEST_ = $(TEST_DIR)/
# TEST_ = $(TEST_DIR)/
# TEST_ = $(TEST_DIR)/
# TEST_ = $(TEST_DIR)/



all:
	./bin/3ac $(T) < $(TEST_$(T))
	./bin/codegen test$(T).ir > test$(T).s
	spim -file test$(T).s

clean:
	rm -rf *.s
	rm -rf *.ir
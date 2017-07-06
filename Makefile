.PHONY: clean All

All:
	@echo "----------Building project:[ basiccodes - Debug ]----------"
	@"$(MAKE)" -f  "basiccodes.mk"
clean:
	@echo "----------Cleaning project:[ basiccodes - Debug ]----------"
	@"$(MAKE)" -f  "basiccodes.mk" clean

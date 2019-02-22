TARGET=utf8_unicode_composer
SRC=$(TARGET).c

$(TARGET): $(SRC)
	$(CC) -o $@ $<

clean:
	rm -f $(TARGET) *~


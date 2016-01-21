all:
	$(MAKE) -C libradio
	$(MAKE) -C libpump
	$(MAKE) -C cmd
	$(MAKE) -C cc1110

clean:
	$(MAKE) -C libradio clean
	$(MAKE) -C libpump clean
	$(MAKE) -C cmd clean
	$(MAKE) -C cc1110 clean


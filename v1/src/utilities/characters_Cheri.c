int getCheriCharacter(int index, int y) {
unsigned int characters_cheri_0[][150] = {	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b1111000000,
		0b1001000000,
		0b1001000000,
		0b1001000000,
		0b1001000000,
		0b1001000000,
		0b1001000000,
		0b1001000000,
		0b1111000000,
		0b1001000000,
		0b1001000000,
		0b1101000000,
		0b0110000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0111100000,
		0b1010100000,
		0b1011100000,
		0b0111000000,
		0b0011000000,
		0b0000000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0111100000,
		0b1000010000,
		0b1011010000,
		0b1110010000,
		0b1010010000,
		0b0101100000,
		0b0101000000,
		0b0010000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0111100000,
		0b1010100000,
		0b1011100000,
		0b0111000000,
		0b0011000000,
		0b0000000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0111100000,
		0b1000010000,
		0b1011010000,
		0b1110010000,
		0b1010010000,
		0b0101100000,
		0b0101000000,
		0b0010000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0111100000,
		0b1010100000,
		0b1011100000,
		0b0111000000,
		0b0011000000,
		0b0000000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b1110000000,
		0b1001000000,
		0b1001000000,
		0b1011000000,
		0b0110000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0111100000,
		0b1000010000,
		0b1011010000,
		0b1110010000,
		0b1010010000,
		0b0101100000,
		0b0101000000,
		0b0010000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0111100000,
		0b1010100000,
		0b1011100000,
		0b0111000000,
		0b0011000000,
		0b0000000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0111100000,
		0b1000010000,
		0b1011010000,
		0b1110010000,
		0b1010010000,
		0b0101100000,
		0b0101000000,
		0b0010000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0111100000,
		0b1010100000,
		0b1011100000,
		0b0111000000,
		0b0011000000,
		0b0000000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b1110000000,
		0b1001000000,
		0b1001000000,
		0b1011000000,
		0b0110000000,
	},
};//################################################################################
unsigned int characters_cheri_1[][150] = {	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b1110000000,
		0b1001000000,
		0b1001000000,
		0b1011000000,
		0b0110000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b1110000000,
		0b1001000000,
		0b1001000000,
		0b1011000000,
		0b0110000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0111100000,
		0b1000010000,
		0b1011010000,
		0b1110010000,
		0b1010010000,
		0b0101100000,
		0b0101000000,
		0b0010000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0011100000,
		0b0100010000,
		0b0100010000,
		0b1001001000,
		0b1011101000,
		0b1010101000,
		0b1010101000,
		0b1010101000,
		0b1011001000,
		0b1000011000,
		0b0100010000,
		0b0111100000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0110000000,
		0b1110000000,
		0b1010000000,
		0b1010000000,
		0b1010000000,
		0b1010000000,
		0b1010000000,
		0b1010000000,
		0b1010000000,
		0b1010000000,
		0b1010000000,
		0b1110000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0011100000,
		0b0100100000,
		0b1001010000,
		0b1011010000,
		0b1011010000,
		0b0110010000,
		0b0100100000,
		0b1001000000,
		0b1000100000,
		0b1000100000,
		0b1000100000,
		0b1111100000,
		0b0000000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0011000000,
		0b0100100000,
		0b1000010000,
		0b1010010000,
		0b1110010000,
		0b0100010000,
		0b0100100000,
		0b0100010000,
		0b0010010000,
		0b0110010000,
		0b0100110000,
		0b0111100000,
		0b0000000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b1111100000,
		0b1010100000,
		0b1010100000,
		0b1010100000,
		0b1010100000,
		0b1010100000,
		0b1000100000,
		0b0100100000,
		0b0110100000,
		0b0010100000,
		0b0010100000,
		0b0011100000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b1111000000,
		0b1000110000,
		0b1000010000,
		0b1010010000,
		0b1011110000,
		0b1001110000,
		0b0100010000,
		0b0110010000,
		0b1001010000,
		0b1001010000,
		0b1000010000,
		0b0100100000,
		0b0011100000,
	},
	{
		0b0000000000,
		0b0011000000,
		0b0100100000,
		0b1000010000,
		0b1011010000,
		0b1011010000,
		0b1011110000,
		0b1010100000,
		0b1000010000,
		0b1001010000,
		0b1001010000,
		0b1000010000,
		0b0100010000,
		0b0111100000,
		0b0000000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b1111110000,
		0b1000010000,
		0b1000010000,
		0b1001010000,
		0b1110110000,
		0b0110100000,
		0b0101000000,
		0b0101000000,
		0b1001000000,
		0b1010000000,
		0b1010000000,
		0b1010000000,
		0b1110000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0111100000,
		0b1100110000,
		0b1000010000,
		0b1011010000,
		0b1011010000,
		0b0100110000,
		0b1000011000,
		0b1011001000,
		0b1001001000,
		0b1000001000,
		0b0100010000,
		0b0111110000,
		0b0001000000,
	},
	{
		0b0000000000,
		0b0011000000,
		0b0100100000,
		0b1000100000,
		0b1010010000,
		0b1010010000,
		0b1000010000,
		0b0101010000,
		0b1111010000,
		0b1011010000,
		0b1001010000,
		0b1000010000,
		0b0100100000,
		0b0111100000,
		0b0000000000,
	},
};//################################################################################
unsigned int characters_cheri_2[][150] = {	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b1110000000,
		0b1001000000,
		0b1001000000,
		0b1001000000,
		0b0110000000,
		0b1111000000,
		0b1001000000,
		0b1001000000,
		0b0111000000,
		0b0110000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b1110000000,
		0b1001000000,
		0b1001000000,
		0b1001000000,
		0b0110000000,
		0b1111000000,
		0b1001000000,
		0b1001000000,
		0b0111000000,
		0b0110000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0111100000,
		0b1010100000,
		0b1011100000,
		0b0111000000,
		0b0011000000,
		0b0000000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0111100000,
		0b1000010000,
		0b1011010000,
		0b1110010000,
		0b1010010000,
		0b0101100000,
		0b0101000000,
		0b0010000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0111100000,
		0b1010100000,
		0b1011100000,
		0b0111000000,
		0b0011000000,
		0b0000000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0111000000,
		0b1000100000,
		0b1000010000,
		0b1000010000,
		0b1111010000,
		0b1000010000,
		0b1000100000,
		0b1001000000,
		0b1110000000,
		0b1001000000,
		0b1001000000,
		0b1011000000,
		0b0110000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0111100000,
		0b1000010000,
		0b1000010000,
		0b1000010000,
		0b1000010000,
		0b0100100000,
		0b0100100000,
		0b0011000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0011100000,
		0b0010100000,
		0b0010010000,
		0b0010010000,
		0b0100010000,
		0b0101010000,
		0b0100001000,
		0b0100001000,
		0b0101101000,
		0b1001101000,
		0b1001101000,
		0b0110111000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b1111000000,
		0b1000100000,
		0b1000100000,
		0b1010100000,
		0b1010100000,
		0b1000100000,
		0b1010010000,
		0b1110010000,
		0b1010010000,
		0b1000010000,
		0b1000100000,
		0b1111100000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0011100000,
		0b0100010000,
		0b1100010000,
		0b1011010000,
		0b1010110000,
		0b1010000000,
		0b1010110000,
		0b1011001000,
		0b1011001000,
		0b1000010000,
		0b0100010000,
		0b0011100000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0111000000,
		0b1000100000,
		0b1000010000,
		0b1011010000,
		0b1011010000,
		0b1011010000,
		0b1011010000,
		0b1011010000,
		0b1010010000,
		0b1000100000,
		0b1001100000,
		0b1111000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0011000000,
		0b0100100000,
		0b1000010000,
		0b1011010000,
		0b1000010000,
		0b1000110000,
		0b1011000000,
		0b1011000000,
		0b1001000000,
		0b1101000000,
		0b0101000000,
		0b0010000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b1111100000,
		0b1000100000,
		0b1000100000,
		0b1011100000,
		0b1011000000,
		0b1001000000,
		0b1011000000,
		0b1010000000,
		0b1010000000,
		0b1010000000,
		0b1010000000,
		0b1110000000,
	},
};//################################################################################
unsigned int characters_cheri_3[][150] = {	{
		0b0000000000,
		0b0000000000,
		0b0111110000,
		0b0100010000,
		0b1000010000,
		0b1001010000,
		0b1011010000,
		0b1000010000,
		0b0100010000,
		0b1011010000,
		0b1011010000,
		0b1001010000,
		0b1000010000,
		0b0100100000,
		0b0011100000,
	},
	{
		0b0000000000,
		0b1110000000,
		0b1010000000,
		0b1010000000,
		0b1010000000,
		0b1011100000,
		0b1000100000,
		0b1000100000,
		0b1000010000,
		0b1011010000,
		0b1011010000,
		0b1011010000,
		0b1011010000,
		0b1011010000,
		0b1111010000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b1110000000,
		0b1010000000,
		0b1010000000,
		0b1010000000,
		0b1010000000,
		0b1010000000,
		0b1010000000,
		0b1010000000,
		0b1010000000,
		0b1010000000,
		0b1010000000,
		0b1110000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0001110000,
		0b0010010000,
		0b0001010000,
		0b0001010000,
		0b0001010000,
		0b1111010000,
		0b1011010000,
		0b1011010000,
		0b1011010000,
		0b1000010000,
		0b0100100000,
		0b0111100000,
		0b0000000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b1111100000,
		0b1011010000,
		0b1011010000,
		0b1011010000,
		0b1010010000,
		0b1000100000,
		0b1000100000,
		0b1010010000,
		0b1011010000,
		0b1011001000,
		0b1011001000,
		0b1111001000,
		0b0001111000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0110000000,
		0b1010000000,
		0b1010000000,
		0b1010000000,
		0b1010000000,
		0b1010000000,
		0b1010000000,
		0b1011100000,
		0b1000100000,
		0b1000100000,
		0b1000100000,
		0b1111100000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b1111101100
		0b1000010010
		0b1000000001
		0b1001100101
		0b1010101101
		0b1010101101
		0b1010101101
		0b1010101101
		0b1011001101
		0b1011001101
		0b1011001101
		0b1111111111
		0b0000010000
	},
	{
		0b0000000000,
		0b0000000000,
		0b1111100000,
		0b1000010000,
		0b1000011000,
		0b1001101000,
		0b1010101000,
		0b1010101000,
		0b1010101000,
		0b1010101000,
		0b1010101000,
		0b1010101000,
		0b1010101000,
		0b1110111000,
		0b0000000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0011100000,
		0b0100100000,
		0b1100010000,
		0b1011010000,
		0b1011101000,
		0b1011101000,
		0b1010101000,
		0b1011101000,
		0b1011101000,
		0b0100001000,
		0b0100010000,
		0b0011100000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b1111000000,
		0b1000100000,
		0b1000100000,
		0b1011010000,
		0b1011010000,
		0b1011010000,
		0b1010010000,
		0b1000010000,
		0b1000110000,
		0b1000100000,
		0b1011000000,
		0b1010000000,
		0b1110000000,
	},
	{
		0b0000000000,
		0b0111000000,
		0b0100100000,
		0b1000010000,
		0b1011010000,
		0b1010110000,
		0b1010110000,
		0b1011110000,
		0b1010110000,
		0b1000010000,
		0b0100101000,
		0b0110011000,
		0b0001000100,
		0b0000100100,
		0b0000111000,
	},
	{
		0b0000000000,
		0b0111000000,
		0b1000100000,
		0b1000010000,
		0b1011010000,
		0b1011010000,
		0b1010010000,
		0b1000100000,
		0b1010010000,
		0b1011010000,
		0b1011001000,
		0b1011001000,
		0b1111001000,
		0b0001001000,
		0b0001111000,
	},
	{
		0b0000000000,
		0b0011000000,
		0b0111100000,
		0b0100100000,
		0b0101010000,
		0b0101010000,
		0b0101100000,
		0b0100100000,
		0b0110010000,
		0b0111010000,
		0b1001010000,
		0b1000010000,
		0b0100110000,
		0b0111100000,
		0b0000000000,
	},
};//################################################################################
unsigned int characters_cheri_4[][150] = {	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b1111110000,
		0b1000010000,
		0b1000010000,
		0b1100110000,
		0b0100100000,
		0b0100100000,
		0b0100100000,
		0b0100100000,
		0b0100100000,
		0b0100100000,
		0b0100100000,
		0b0111100000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b1111111000,
		0b1010001000,
		0b1011001000,
		0b1011001000,
		0b1011001000,
		0b1011001000,
		0b1011001000,
		0b1011001000,
		0b1000001000,
		0b0100010000,
		0b0100010000,
		0b0011100000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b1110000000,
		0b1011110000,
		0b1001010000,
		0b1010010000,
		0b1010010000,
		0b1000100000,
		0b0100100000,
		0b0100100000,
		0b0100100000,
		0b0100100000,
		0b0101000000,
		0b0011000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0110001110
		0b1011111010
		0b1001011010
		0b1001001010
		0b1010001010
		0b1010000010
		0b1000000010
		0b0100100010
		0b0100100100
		0b0100100100
		0b0101010100
		0b0011011100
	},
	{
		0b0000000000,
		0b0000000000,
		0b0110110000,
		0b1001001000,
		0b1001001000,
		0b1001010000,
		0b0100010000,
		0b0100010000,
		0b0100010000,
		0b0100001000,
		0b0101000100,
		0b1001100100,
		0b1010101000,
		0b1110010000,
		0b0000000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b1110111000,
		0b1011001000,
		0b1011001000,
		0b1011001000,
		0b1011001000,
		0b1000001000,
		0b0100001000,
		0b0111001000,
		0b1001001000,
		0b0100001000,
		0b0100010000,
		0b0011110000,
		0b0001000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b1111110000,
		0b1000010000,
		0b1000010000,
		0b1111001000,
		0b0010010000,
		0b0010010000,
		0b0100100000,
		0b1100100000,
		0b1001110000,
		0b1000010000,
		0b1000010000,
		0b1111110000,
		0b0000000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0111100000,
		0b1000010000,
		0b1011010000,
		0b1110010000,
		0b1010010000,
		0b0101100000,
		0b0101000000,
		0b0010000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0111100000,
		0b1010100000,
		0b1011100000,
		0b0111000000,
		0b0011000000,
		0b0000000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0111100000,
		0b1000010000,
		0b1011010000,
		0b1110010000,
		0b1010010000,
		0b0101100000,
		0b0101000000,
		0b0010000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0111100000,
		0b1010100000,
		0b1011100000,
		0b0111000000,
		0b0011000000,
		0b0000000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0111100000,
		0b1000010000,
		0b1011010000,
		0b1110010000,
		0b1010010000,
		0b0101100000,
		0b0101000000,
		0b0010000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0111100000,
		0b1000010000,
		0b1000010000,
		0b1000010000,
		0b1000010000,
		0b0100100000,
		0b0100100000,
		0b0011000000,
	},
};//################################################################################
unsigned int characters_cheri_5[][150] = {	{
		0b0000000000,
		0b0000000000,
		0b0011100000,
		0b0100010000,
		0b0100001000,
		0b1001001000,
		0b0101001000,
		0b1010001000,
		0b1000001000,
		0b1011001000,
		0b1000001000,
		0b1100001000,
		0b0111001000,
		0b0000111000,
		0b0000010000,
	},
	{
		0b0000000000,
		0b1110000000,
		0b1010000000,
		0b1010000000,
		0b1011000000,
		0b1000100000,
		0b1000110000,
		0b1010010000,
		0b1011010000,
		0b1011010000,
		0b1011010000,
		0b1010010000,
		0b1000110000,
		0b1000100000,
		0b1111000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0011100000,
		0b0110010000,
		0b0100010000,
		0b1001110000,
		0b1010101000,
		0b1010110000,
		0b1010010000,
		0b1011101000,
		0b1000001000,
		0b1000001000,
		0b0100011000,
		0b0011100000,
	},
	{
		0b0000000000,
		0b0001110000,
		0b0001010000,
		0b0001010000,
		0b0011010000,
		0b0100010000,
		0b1100010000,
		0b1000010000,
		0b1001010000,
		0b1011010000,
		0b1101010000,
		0b1011010000,
		0b1000010000,
		0b0100010000,
		0b0011110000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0011100000,
		0b0100010000,
		0b0100010000,
		0b1001001000,
		0b1001001000,
		0b1000001000,
		0b1001111000,
		0b1010110000,
		0b1001101000,
		0b1100010000,
		0b0100010000,
		0b0011100000,
	},
	{
		0b0000000000,
		0b0011000000,
		0b0100100000,
		0b1000100000,
		0b1010010000,
		0b1110010000,
		0b1110010000,
		0b1011110000,
		0b1000100000,
		0b1000100000,
		0b1011100000,
		0b1010000000,
		0b1010000000,
		0b1010000000,
		0b0100000000,
	},
	{
		0b0000000000,
		0b0001100000,
		0b0110010000,
		0b1100010000,
		0b1001010000,
		0b1011010000,
		0b1011010000,
		0b1000010000,
		0b0111010000,
		0b1011010000,
		0b1011010000,
		0b1001010000,
		0b1000010000,
		0b0100100000,
		0b0011000000,
	},
	{
		0b0000000000,
		0b1110000000,
		0b1010000000,
		0b1010000000,
		0b1010000000,
		0b1011100000,
		0b1000100000,
		0b1000100000,
		0b1000010000,
		0b1011010000,
		0b1011010000,
		0b1011010000,
		0b1011010000,
		0b1011010000,
		0b1111010000,
	},
	{
		0b1110000000,
		0b1001000000,
		0b1001000000,
		0b1001000000,
		0b0110000000,
		0b1001000000,
		0b1001000000,
		0b1001000000,
		0b1001000000,
		0b1001000000,
		0b1001000000,
		0b1001000000,
		0b1001000000,
		0b1001000000,
		0b1111000000,
	},
	{
		0b0001111000,
		0b0001001000,
		0b0001001000,
		0b0000110000,
		0b0000111000,
		0b0000101000,
		0b0000101000,
		0b0000101000,
		0b0000101000,
		0b0111101000,
		0b1001101000,
		0b1001101000,
		0b1001101000,
		0b0100001000,
		0b0100011000,
	},
	{
		0b1110000000,
		0b1011100000,
		0b1011010000,
		0b1011010000,
		0b1010010000,
		0b1000010000,
		0b1000010000,
		0b1010010000,
		0b1011010000,
		0b1011001000,
		0b1011001000,
		0b1111001000,
		0b0001001000,
		0b0001001000,
		0b0001111000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b1110000000,
		0b1010000000,
		0b1010000000,
		0b1010000000,
		0b1010000000,
		0b1010000000,
		0b1010000000,
		0b1010000000,
		0b1010000000,
		0b1010000000,
		0b1010000000,
		0b1110000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b1111101100
		0b1000010010
		0b1000000001
		0b1001100101
		0b1010101101
		0b1010101101
		0b1010101101
		0b1010101101
		0b1011001101
		0b1011001101
		0b1011001101
		0b1111111111
		0b0000010000
	},
};//################################################################################
unsigned int characters_cheri_6[][150] = {	{
		0b0000000000,
		0b0000000000,
		0b1111100000,
		0b1000010000,
		0b1000011000,
		0b1001101000,
		0b1010101000,
		0b1010101000,
		0b1010101000,
		0b1010101000,
		0b1010101000,
		0b1010101000,
		0b1010101000,
		0b1110111000,
		0b0000000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0011100000,
		0b0100010000,
		0b0100010000,
		0b1001001000,
		0b1011101000,
		0b1010101000,
		0b1010101000,
		0b1010101000,
		0b1011001000,
		0b1000011000,
		0b0100010000,
		0b0111100000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0111100000,
		0b1000010000,
		0b1000011000,
		0b1011001000,
		0b1010101000,
		0b1010101000,
		0b1001101000,
		0b1000001000,
		0b1000010000,
		0b1001100000,
		0b1001000000,
		0b1001000000,
		0b0110000000,
	},
	{
		0b0011110000,
		0b0100010000,
		0b1000010000,
		0b1011010000,
		0b1011010000,
		0b1011010000,
		0b1001010000,
		0b1000010000,
		0b1100010000,
		0b0100010000,
		0b0011010000,
		0b0001011000,
		0b0001000100,
		0b0001001100,
		0b0001011000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b1111100000,
		0b1000100000,
		0b1000010000,
		0b1010010000,
		0b1011010000,
		0b1011010000,
		0b1011110000,
		0b1010000000,
		0b1010000000,
		0b1010000000,
		0b1010000000,
		0b1110000000,
	},
	{
		0b0000000000,
		0b0011100000,
		0b0010010000,
		0b0100010000,
		0b0101001000,
		0b0101101000,
		0b0100110000,
		0b0100010000,
		0b0110010000,
		0b1001010000,
		0b1001010000,
		0b0100010000,
		0b0100010000,
		0b0011100000,
		0b0001000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b1110000000,
		0b1010000000,
		0b1001110000,
		0b1000010000,
		0b1000010000,
		0b1011110000,
		0b1011010000,
		0b1011010000,
		0b1011010000,
		0b1000010000,
		0b0100100000,
		0b0111100000,
		0b0000000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0111111000,
		0b1001001000,
		0b1001001000,
		0b1011001000,
		0b1011001000,
		0b1011001000,
		0b1011001000,
		0b1011010000,
		0b1000010000,
		0b1000010000,
		0b0100110000,
		0b0011100000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b1110000000,
		0b1011110000,
		0b1001010000,
		0b1010010000,
		0b1010010000,
		0b1010100000,
		0b1000100000,
		0b1000100000,
		0b1000100000,
		0b0101000000,
		0b0101000000,
		0b0111000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b1110001110
		0b1011111010
		0b1001011010
		0b1010001010
		0b1010010010
		0b1010000010
		0b1000100010
		0b1000100010
		0b0100100100
		0b0101100100
		0b0101100100
		0b0111011100
	},
	{
		0b0000000000,
		0b0000000000,
		0b0011011000,
		0b0100100100,
		0b0100100100,
		0b0010100100,
		0b0010001000,
		0b0010001000,
		0b0100010000,
		0b0100001000,
		0b1000101000,
		0b1001100100,
		0b0101100100,
		0b0010011100,
		0b0000000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b1111110000,
		0b1011010000,
		0b1011010000,
		0b1011010000,
		0b1011010000,
		0b1000010000,
		0b0100010000,
		0b1011010000,
		0b1011010000,
		0b1000110000,
		0b1000100000,
		0b0111100000,
		0b0011000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0111111000,
		0b0100000100,
		0b0100000100,
		0b0111100100,
		0b0000100100,
		0b0001001100,
		0b0010001000,
		0b0100010000,
		0b1100111000,
		0b0100001000,
		0b0100001000,
		0b0111111000,
		0b0000100000,
	},
};//################################################################################
unsigned int characters_cheri_7[][150] = {	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0111100000,
		0b1010100000,
		0b1011100000,
		0b0111000000,
		0b0011000000,
		0b0000000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0111100000,
		0b1000010000,
		0b1011010000,
		0b1110010000,
		0b1010010000,
		0b0101100000,
		0b0101000000,
		0b0010000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0111100000,
		0b1010100000,
		0b1011100000,
		0b0111000000,
		0b0011000000,
		0b0000000000,
	},
	{
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0000000000,
		0b0111100000,
		0b1000010000,
		0b1011010000,
		0b1110010000,
		0b1010010000,
		0b0101100000,
		0b0101000000,
		0b0010000000,
	},
};
	int start = (int)(' ');
	if (index >= start && index < start + 13) {
		return characters_cheri_0[index - start][y];
	}
	else if (index >= start + 13 && index < start + 13 * 2) {
		return characters_cheri_1[index - (start + 13)][y];
	}
	else if (index >= start + 13 * 2 && index < start + 13 * 3) {
		return characters_cheri_2[index - (start + 13 * 2)][y];
	}
	else if (index >= start + 13 * 3 && index < start + 13 * 4) {
		return characters_cheri_3[index - (start + 13 * 3)][y];
	}
	else if (index >= start + 13 * 4 && index < start + 13 * 5) {
		return characters_cheri_4[index - (start + 13 * 4)][y];
	}
	else if (index >= start + 13 * 5 && index < start + 13 * 6) {
		return characters_cheri_5[index - (start + 13 * 5)][y];
	}
	else if (index >= start + 13 * 6 && index < start + 13 * 7) {
		return characters_cheri_6[index - (start + 13 * 6)][y];
	}
	else if (index >= start + 13 * 7 && index < start + 13 * 8) {
		return characters_cheri_7[index - (start + 13 * 7)][y];
	}
}

const int font_cheri_width = 10;
const int font_cheri_height = 15;

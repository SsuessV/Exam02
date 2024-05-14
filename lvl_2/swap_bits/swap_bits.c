unsigned char swap_bits(unsigned char octet)
{
    unsigned char left_half = octet & 0xF0; //0xF0 is 11110000 in binary, In hexadecimal notation, the digit F represents the binary value 1111, and 0 represents 0000.
    unsigned char right_half = octet & 0x0F; //0x0F is 00001111 in binary. 

    left_half >>= 4;
    right_half <<= 4;

    return left_half | right_half;
}


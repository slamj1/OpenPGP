#ifndef __IDEATESTVECTORSSET7__
#define __IDEATESTVECTORSSET7__

#include "../plainkeycipher.h"

// Test vectors from <https://www.cosic.esat.kuleuven.be/nessie/testvectors/bc/idea/Idea-128-64.verified.test-vectors>

const std::vector <PlainKeyCipher> IDEA_TEST_VECTORS_SET_7 = {
    std::make_tuple("0001000100000000", "00000000000000000000000000000000", "0000000000000000"),
    std::make_tuple("6d33179ce8b3c1fa", "01010101010101010101010101010101", "0101010101010101"),
    std::make_tuple("df163e38ad71a489", "02020202020202020202020202020202", "0202020202020202"),
    std::make_tuple("a74ab61fe64ccd14", "03030303030303030303030303030303", "0303030303030303"),
    std::make_tuple("decd1268ce7b3cd5", "04040404040404040404040404040404", "0404040404040404"),
    std::make_tuple("e2f73c827cc38e67", "05050505050505050505050505050505", "0505050505050505"),
    std::make_tuple("fa93be07e3b0e09c", "06060606060606060606060606060606", "0606060606060606"),
    std::make_tuple("ab246ac5aade1b14", "07070707070707070707070707070707", "0707070707070707"),
    std::make_tuple("ac0c17067c0da182", "08080808080808080808080808080808", "0808080808080808"),
    std::make_tuple("ee0ea8a773be26c6", "09090909090909090909090909090909", "0909090909090909"),
    std::make_tuple("95bf40e823fb39c1", "0a0a0a0a0a0a0a0a0a0a0a0a0a0a0a0a", "0a0a0a0a0a0a0a0a"),
    std::make_tuple("eb316aa4993c68c6", "0b0b0b0b0b0b0b0b0b0b0b0b0b0b0b0b", "0b0b0b0b0b0b0b0b"),
    std::make_tuple("e2c7d821ac4ad86c", "0c0c0c0c0c0c0c0c0c0c0c0c0c0c0c0c", "0c0c0c0c0c0c0c0c"),
    std::make_tuple("7514a54ba6cfa933", "0d0d0d0d0d0d0d0d0d0d0d0d0d0d0d0d", "0d0d0d0d0d0d0d0d"),
    std::make_tuple("2e5a8279a756def4", "0e0e0e0e0e0e0e0e0e0e0e0e0e0e0e0e", "0e0e0e0e0e0e0e0e"),
    std::make_tuple("f124018c83415ff3", "0f0f0f0f0f0f0f0f0f0f0f0f0f0f0f0f", "0f0f0f0f0f0f0f0f"),
    std::make_tuple("21d3f5bc44e9e1f1", "10101010101010101010101010101010", "1010101010101010"),
    std::make_tuple("3a1d3b4db127c8b7", "11111111111111111111111111111111", "1111111111111111"),
    std::make_tuple("2497189242cdb152", "12121212121212121212121212121212", "1212121212121212"),
    std::make_tuple("dfc779d8613ecf5d", "13131313131313131313131313131313", "1313131313131313"),
    std::make_tuple("ffe36a1199f71ad9", "14141414141414141414141414141414", "1414141414141414"),
    std::make_tuple("e34f99d4b42f4ddb", "15151515151515151515151515151515", "1515151515151515"),
    std::make_tuple("e7a3ce5041458e86", "16161616161616161616161616161616", "1616161616161616"),
    std::make_tuple("607ee74a70676dab", "17171717171717171717171717171717", "1717171717171717"),
    std::make_tuple("e89c1bd91c5ce63b", "18181818181818181818181818181818", "1818181818181818"),
    std::make_tuple("b679df3338c7cee9", "19191919191919191919191919191919", "1919191919191919"),
    std::make_tuple("b66bc9876ba3a6b8", "1a1a1a1a1a1a1a1a1a1a1a1a1a1a1a1a", "1a1a1a1a1a1a1a1a"),
    std::make_tuple("ea695916687862a9", "1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b", "1b1b1b1b1b1b1b1b"),
    std::make_tuple("c4f9da6928bfdb2c", "1c1c1c1c1c1c1c1c1c1c1c1c1c1c1c1c", "1c1c1c1c1c1c1c1c"),
    std::make_tuple("4d068b78c0b1f45b", "1d1d1d1d1d1d1d1d1d1d1d1d1d1d1d1d", "1d1d1d1d1d1d1d1d"),
    std::make_tuple("eb2d9bdb2f32a328", "1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e", "1e1e1e1e1e1e1e1e"),
    std::make_tuple("ece75e6730910acf", "1f1f1f1f1f1f1f1f1f1f1f1f1f1f1f1f", "1f1f1f1f1f1f1f1f"),
    std::make_tuple("6242f5cc44a48d6c", "20202020202020202020202020202020", "2020202020202020"),
    std::make_tuple("95669a6794a3c260", "21212121212121212121212121212121", "2121212121212121"),
    std::make_tuple("400c910b1dec3244", "22222222222222222222222222222222", "2222222222222222"),
    std::make_tuple("82954e32cd66f748", "23232323232323232323232323232323", "2323232323232323"),
    std::make_tuple("a28b98468b24105a", "24242424242424242424242424242424", "2424242424242424"),
    std::make_tuple("b88321e1a912c1cf", "25252525252525252525252525252525", "2525252525252525"),
    std::make_tuple("10ef9242c256d127", "26262626262626262626262626262626", "2626262626262626"),
    std::make_tuple("cc1bbe51581a159f", "27272727272727272727272727272727", "2727272727272727"),
    std::make_tuple("b5d7b562c27f8f2f", "28282828282828282828282828282828", "2828282828282828"),
    std::make_tuple("1893a5df78ee02b1", "29292929292929292929292929292929", "2929292929292929"),
    std::make_tuple("26924c8140545b22", "2a2a2a2a2a2a2a2a2a2a2a2a2a2a2a2a", "2a2a2a2a2a2a2a2a"),
    std::make_tuple("c88b1d305b712cf0", "2b2b2b2b2b2b2b2b2b2b2b2b2b2b2b2b", "2b2b2b2b2b2b2b2b"),
    std::make_tuple("145bceae2f8b9332", "2c2c2c2c2c2c2c2c2c2c2c2c2c2c2c2c", "2c2c2c2c2c2c2c2c"),
    std::make_tuple("ea6e631c0e7a0f76", "2d2d2d2d2d2d2d2d2d2d2d2d2d2d2d2d", "2d2d2d2d2d2d2d2d"),
    std::make_tuple("4872caf8fcd1d626", "2e2e2e2e2e2e2e2e2e2e2e2e2e2e2e2e", "2e2e2e2e2e2e2e2e"),
    std::make_tuple("60faa2607a7a174e", "2f2f2f2f2f2f2f2f2f2f2f2f2f2f2f2f", "2f2f2f2f2f2f2f2f"),
    std::make_tuple("b1c48c467ec93d5a", "30303030303030303030303030303030", "3030303030303030"),
    std::make_tuple("c1779459bcd715c3", "31313131313131313131313131313131", "3131313131313131"),
    std::make_tuple("3890e76816a035d4", "32323232323232323232323232323232", "3232323232323232"),
    std::make_tuple("4575d36364ccf9d8", "33333333333333333333333333333333", "3333333333333333"),
    std::make_tuple("27ee09ef96b86533", "34343434343434343434343434343434", "3434343434343434"),
    std::make_tuple("50fffe9a739ccfe0", "35353535353535353535353535353535", "3535353535353535"),
    std::make_tuple("c1d850aa9a08bfa7", "36363636363636363636363636363636", "3636363636363636"),
    std::make_tuple("ef6f54302e12184f", "37373737373737373737373737373737", "3737373737373737"),
    std::make_tuple("e3f3871178e7cc4f", "38383838383838383838383838383838", "3838383838383838"),
    std::make_tuple("0220d644b0143bde", "39393939393939393939393939393939", "3939393939393939"),
    std::make_tuple("577a16e8964202bc", "3a3a3a3a3a3a3a3a3a3a3a3a3a3a3a3a", "3a3a3a3a3a3a3a3a"),
    std::make_tuple("3e02e11ae0609c78", "3b3b3b3b3b3b3b3b3b3b3b3b3b3b3b3b", "3b3b3b3b3b3b3b3b"),
    std::make_tuple("d92f00bb598101b5", "3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c", "3c3c3c3c3c3c3c3c"),
    std::make_tuple("c3a6754bff90516d", "3d3d3d3d3d3d3d3d3d3d3d3d3d3d3d3d", "3d3d3d3d3d3d3d3d"),
    std::make_tuple("07f539c02822590d", "3e3e3e3e3e3e3e3e3e3e3e3e3e3e3e3e", "3e3e3e3e3e3e3e3e"),
    std::make_tuple("8896e8479a2eb33f", "3f3f3f3f3f3f3f3f3f3f3f3f3f3f3f3f", "3f3f3f3f3f3f3f3f"),
    std::make_tuple("36d4cf3a566970af", "40404040404040404040404040404040", "4040404040404040"),
    std::make_tuple("897d2cf7994b2470", "41414141414141414141414141414141", "4141414141414141"),
    std::make_tuple("f601a9632c3c62b7", "42424242424242424242424242424242", "4242424242424242"),
    std::make_tuple("bacbdd51b31ee859", "43434343434343434343434343434343", "4343434343434343"),
    std::make_tuple("f7638f197696de7c", "44444444444444444444444444444444", "4444444444444444"),
    std::make_tuple("5b19af843de1a00d", "45454545454545454545454545454545", "4545454545454545"),
    std::make_tuple("133043708039ba9c", "46464646464646464646464646464646", "4646464646464646"),
    std::make_tuple("9639b2731cf6bd65", "47474747474747474747474747474747", "4747474747474747"),
    std::make_tuple("f2fde6ecad971c0a", "48484848484848484848484848484848", "4848484848484848"),
    std::make_tuple("988fd9549fad5ca2", "49494949494949494949494949494949", "4949494949494949"),
    std::make_tuple("7460ec4f2ff98f4b", "4a4a4a4a4a4a4a4a4a4a4a4a4a4a4a4a", "4a4a4a4a4a4a4a4a"),
    std::make_tuple("4202e7a8b8c82f53", "4b4b4b4b4b4b4b4b4b4b4b4b4b4b4b4b", "4b4b4b4b4b4b4b4b"),
    std::make_tuple("7b9c3715642aa3af", "4c4c4c4c4c4c4c4c4c4c4c4c4c4c4c4c", "4c4c4c4c4c4c4c4c"),
    std::make_tuple("cf96e84cdcf75056", "4d4d4d4d4d4d4d4d4d4d4d4d4d4d4d4d", "4d4d4d4d4d4d4d4d"),
    std::make_tuple("1db2d04addc599e6", "4e4e4e4e4e4e4e4e4e4e4e4e4e4e4e4e", "4e4e4e4e4e4e4e4e"),
    std::make_tuple("a4cffd289bf0988e", "4f4f4f4f4f4f4f4f4f4f4f4f4f4f4f4f", "4f4f4f4f4f4f4f4f"),
    std::make_tuple("93ba810a625138ee", "50505050505050505050505050505050", "5050505050505050"),
    std::make_tuple("5795c3c244be0984", "51515151515151515151515151515151", "5151515151515151"),
    std::make_tuple("b255918917d30db6", "52525252525252525252525252525252", "5252525252525252"),
    std::make_tuple("dbd63e3f426bf141", "53535353535353535353535353535353", "5353535353535353"),
    std::make_tuple("1f6c4d99dcc8863d", "54545454545454545454545454545454", "5454545454545454"),
    std::make_tuple("6074c411b8651b08", "55555555555555555555555555555555", "5555555555555555"),
    std::make_tuple("338e59304f374c81", "56565656565656565656565656565656", "5656565656565656"),
    std::make_tuple("d669692fc58844f4", "57575757575757575757575757575757", "5757575757575757"),
    std::make_tuple("f401ba8cd09cbdfb", "58585858585858585858585858585858", "5858585858585858"),
    std::make_tuple("eeeca9b832961d1c", "59595959595959595959595959595959", "5959595959595959"),
    std::make_tuple("7196f6c2933d0048", "5a5a5a5a5a5a5a5a5a5a5a5a5a5a5a5a", "5a5a5a5a5a5a5a5a"),
    std::make_tuple("a159602cf7ba36f4", "5b5b5b5b5b5b5b5b5b5b5b5b5b5b5b5b", "5b5b5b5b5b5b5b5b"),
    std::make_tuple("2f45050af47066b6", "5c5c5c5c5c5c5c5c5c5c5c5c5c5c5c5c", "5c5c5c5c5c5c5c5c"),
    std::make_tuple("55c8274cf9e5122f", "5d5d5d5d5d5d5d5d5d5d5d5d5d5d5d5d", "5d5d5d5d5d5d5d5d"),
    std::make_tuple("4393c3bef64a0962", "5e5e5e5e5e5e5e5e5e5e5e5e5e5e5e5e", "5e5e5e5e5e5e5e5e"),
    std::make_tuple("87cdfda728278056", "5f5f5f5f5f5f5f5f5f5f5f5f5f5f5f5f", "5f5f5f5f5f5f5f5f"),
    std::make_tuple("c419303c1bc6078b", "60606060606060606060606060606060", "6060606060606060"),
    std::make_tuple("14189d710244ec0f", "61616161616161616161616161616161", "6161616161616161"),
    std::make_tuple("e283182d89dc2abc", "62626262626262626262626262626262", "6262626262626262"),
    std::make_tuple("5f7c9ef49be17a09", "63636363636363636363636363636363", "6363636363636363"),
    std::make_tuple("abf61e3f6354537e", "64646464646464646464646464646464", "6464646464646464"),
    std::make_tuple("3116cf29793667ee", "65656565656565656565656565656565", "6565656565656565"),
    std::make_tuple("c9248b00868d8651", "66666666666666666666666666666666", "6666666666666666"),
    std::make_tuple("fa85b0d5eb81e00e", "67676767676767676767676767676767", "6767676767676767"),
    std::make_tuple("abd32134d248de95", "68686868686868686868686868686868", "6868686868686868"),
    std::make_tuple("ce4c7a6696e7045f", "69696969696969696969696969696969", "6969696969696969"),
    std::make_tuple("bf217a062a3f2752", "6a6a6a6a6a6a6a6a6a6a6a6a6a6a6a6a", "6a6a6a6a6a6a6a6a"),
    std::make_tuple("1ee92826247b879f", "6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b", "6b6b6b6b6b6b6b6b"),
    std::make_tuple("534051cfae0e474b", "6c6c6c6c6c6c6c6c6c6c6c6c6c6c6c6c", "6c6c6c6c6c6c6c6c"),
    std::make_tuple("fe541578dfa1ef21", "6d6d6d6d6d6d6d6d6d6d6d6d6d6d6d6d", "6d6d6d6d6d6d6d6d"),
    std::make_tuple("a6da49eb274aa034", "6e6e6e6e6e6e6e6e6e6e6e6e6e6e6e6e", "6e6e6e6e6e6e6e6e"),
    std::make_tuple("e91200e1bec746d8", "6f6f6f6f6f6f6f6f6f6f6f6f6f6f6f6f", "6f6f6f6f6f6f6f6f"),
    std::make_tuple("12242d95c7b2e1aa", "70707070707070707070707070707070", "7070707070707070"),
    std::make_tuple("11112654f080a009", "71717171717171717171717171717171", "7171717171717171"),
    std::make_tuple("b6b4af43c3c1bd5a", "72727272727272727272727272727272", "7272727272727272"),
    std::make_tuple("7fc1da4d8a29927a", "73737373737373737373737373737373", "7373737373737373"),
    std::make_tuple("4d1424a6e2f99777", "74747474747474747474747474747474", "7474747474747474"),
    std::make_tuple("c6dc9f097bc971e7", "75757575757575757575757575757575", "7575757575757575"),
    std::make_tuple("b88002c84f836ea6", "76767676767676767676767676767676", "7676767676767676"),
    std::make_tuple("12c6774be0c5e93a", "77777777777777777777777777777777", "7777777777777777"),
    std::make_tuple("d1a2580870c505df", "78787878787878787878787878787878", "7878787878787878"),
    std::make_tuple("65b79538071af9d8", "79797979797979797979797979797979", "7979797979797979"),
    std::make_tuple("0481b20f32b63b37", "7a7a7a7a7a7a7a7a7a7a7a7a7a7a7a7a", "7a7a7a7a7a7a7a7a"),
    std::make_tuple("02acd30476c23a0c", "7b7b7b7b7b7b7b7b7b7b7b7b7b7b7b7b", "7b7b7b7b7b7b7b7b"),
    std::make_tuple("2c4cedbf6a2c54ad", "7c7c7c7c7c7c7c7c7c7c7c7c7c7c7c7c", "7c7c7c7c7c7c7c7c"),
    std::make_tuple("50f38d16d6a0ae03", "7d7d7d7d7d7d7d7d7d7d7d7d7d7d7d7d", "7d7d7d7d7d7d7d7d"),
    std::make_tuple("bdf7f828449aa693", "7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e", "7e7e7e7e7e7e7e7e"),
    std::make_tuple("a66cf7f4b4c3103d", "7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f", "7f7f7f7f7f7f7f7f"),
    std::make_tuple("1736c7434d3a1a54", "80808080808080808080808080808080", "8080808080808080"),
    std::make_tuple("78c56a5c99e3885f", "81818181818181818181818181818181", "8181818181818181"),
    std::make_tuple("24b2420569dc9513", "82828282828282828282828282828282", "8282828282828282"),
    std::make_tuple("2e46220b77ab7a4d", "83838383838383838383838383838383", "8383838383838383"),
    std::make_tuple("b60dfa18180164ee", "84848484848484848484848484848484", "8484848484848484"),
    std::make_tuple("1751553ef8a1c49d", "85858585858585858585858585858585", "8585858585858585"),
    std::make_tuple("41f68e0acbde794d", "86868686868686868686868686868686", "8686868686868686"),
    std::make_tuple("0a8aece3ae569ccc", "87878787878787878787878787878787", "8787878787878787"),
    std::make_tuple("4b29633ec0d32ed7", "88888888888888888888888888888888", "8888888888888888"),
    std::make_tuple("bc1eb08bd3eebfff", "89898989898989898989898989898989", "8989898989898989"),
    std::make_tuple("14fe00047a151c2b", "8a8a8a8a8a8a8a8a8a8a8a8a8a8a8a8a", "8a8a8a8a8a8a8a8a"),
    std::make_tuple("7f0ec436c9c4633b", "8b8b8b8b8b8b8b8b8b8b8b8b8b8b8b8b", "8b8b8b8b8b8b8b8b"),
    std::make_tuple("7db08fd2710cc441", "8c8c8c8c8c8c8c8c8c8c8c8c8c8c8c8c", "8c8c8c8c8c8c8c8c"),
    std::make_tuple("2aa6db5a727691a3", "8d8d8d8d8d8d8d8d8d8d8d8d8d8d8d8d", "8d8d8d8d8d8d8d8d"),
    std::make_tuple("cf2f3f532faa99bf", "8e8e8e8e8e8e8e8e8e8e8e8e8e8e8e8e", "8e8e8e8e8e8e8e8e"),
    std::make_tuple("e5d56f002c4fb53f", "8f8f8f8f8f8f8f8f8f8f8f8f8f8f8f8f", "8f8f8f8f8f8f8f8f"),
    std::make_tuple("e1dd1375465f9d16", "90909090909090909090909090909090", "9090909090909090"),
    std::make_tuple("becb1ff1a78450a7", "91919191919191919191919191919191", "9191919191919191"),
    std::make_tuple("0185e9a9135e639d", "92929292929292929292929292929292", "9292929292929292"),
    std::make_tuple("a3626c4517b4cad0", "93939393939393939393939393939393", "9393939393939393"),
    std::make_tuple("0a629cade4897292", "94949494949494949494949494949494", "9494949494949494"),
    std::make_tuple("f725de012ab68dd9", "95959595959595959595959595959595", "9595959595959595"),
    std::make_tuple("0e89be3d5b3b866b", "96969696969696969696969696969696", "9696969696969696"),
    std::make_tuple("5b746609c56ba450", "97979797979797979797979797979797", "9797979797979797"),
    std::make_tuple("f2dd9359b1ff1598", "98989898989898989898989898989898", "9898989898989898"),
    std::make_tuple("78c169c1cf547f0d", "99999999999999999999999999999999", "9999999999999999"),
    std::make_tuple("55c13e79cdf4a6c8", "9a9a9a9a9a9a9a9a9a9a9a9a9a9a9a9a", "9a9a9a9a9a9a9a9a"),
    std::make_tuple("3c7847ecdbd22e7f", "9b9b9b9b9b9b9b9b9b9b9b9b9b9b9b9b", "9b9b9b9b9b9b9b9b"),
    std::make_tuple("2eb78e05ccbeb44d", "9c9c9c9c9c9c9c9c9c9c9c9c9c9c9c9c", "9c9c9c9c9c9c9c9c"),
    std::make_tuple("8d9b8a6c18615855", "9d9d9d9d9d9d9d9d9d9d9d9d9d9d9d9d", "9d9d9d9d9d9d9d9d"),
    std::make_tuple("c5cc7e174c80ed46", "9e9e9e9e9e9e9e9e9e9e9e9e9e9e9e9e", "9e9e9e9e9e9e9e9e"),
    std::make_tuple("1db1528f10686802", "9f9f9f9f9f9f9f9f9f9f9f9f9f9f9f9f", "9f9f9f9f9f9f9f9f"),
    std::make_tuple("fe504481bdccaa9b", "a0a0a0a0a0a0a0a0a0a0a0a0a0a0a0a0", "a0a0a0a0a0a0a0a0"),
    std::make_tuple("ed3d73069a19297c", "a1a1a1a1a1a1a1a1a1a1a1a1a1a1a1a1", "a1a1a1a1a1a1a1a1"),
    std::make_tuple("7cdfe35aef5a1e7c", "a2a2a2a2a2a2a2a2a2a2a2a2a2a2a2a2", "a2a2a2a2a2a2a2a2"),
    std::make_tuple("2ddcd253556e0858", "a3a3a3a3a3a3a3a3a3a3a3a3a3a3a3a3", "a3a3a3a3a3a3a3a3"),
    std::make_tuple("a7bda86b1f764e3a", "a4a4a4a4a4a4a4a4a4a4a4a4a4a4a4a4", "a4a4a4a4a4a4a4a4"),
    std::make_tuple("f2e0bf5370908bc4", "a5a5a5a5a5a5a5a5a5a5a5a5a5a5a5a5", "a5a5a5a5a5a5a5a5"),
    std::make_tuple("b55da7709795d136", "a6a6a6a6a6a6a6a6a6a6a6a6a6a6a6a6", "a6a6a6a6a6a6a6a6"),
    std::make_tuple("41b77e59b3ecfd12", "a7a7a7a7a7a7a7a7a7a7a7a7a7a7a7a7", "a7a7a7a7a7a7a7a7"),
    std::make_tuple("108580bc7a99be27", "a8a8a8a8a8a8a8a8a8a8a8a8a8a8a8a8", "a8a8a8a8a8a8a8a8"),
    std::make_tuple("5fc7aedc2f0714f0", "a9a9a9a9a9a9a9a9a9a9a9a9a9a9a9a9", "a9a9a9a9a9a9a9a9"),
    std::make_tuple("24aacb435ba4778b", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaa"),
    std::make_tuple("5a4c4870f25a207f", "abababababababababababababababab", "abababababababab"),
    std::make_tuple("607d4e32e138bb42", "acacacacacacacacacacacacacacacac", "acacacacacacacac"),
    std::make_tuple("7f937c3392173535", "adadadadadadadadadadadadadadadad", "adadadadadadadad"),
    std::make_tuple("fbb59d88d9c7e032", "aeaeaeaeaeaeaeaeaeaeaeaeaeaeaeae", "aeaeaeaeaeaeaeae"),
    std::make_tuple("e762cc43752b56ca", "afafafafafafafafafafafafafafafaf", "afafafafafafafaf"),
    std::make_tuple("9c319c17f979d8a7", "b0b0b0b0b0b0b0b0b0b0b0b0b0b0b0b0", "b0b0b0b0b0b0b0b0"),
    std::make_tuple("7118249df312e1ea", "b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1", "b1b1b1b1b1b1b1b1"),
    std::make_tuple("341359d2b974161a", "b2b2b2b2b2b2b2b2b2b2b2b2b2b2b2b2", "b2b2b2b2b2b2b2b2"),
    std::make_tuple("4f50e094d64b9a71", "b3b3b3b3b3b3b3b3b3b3b3b3b3b3b3b3", "b3b3b3b3b3b3b3b3"),
    std::make_tuple("f471458a304d4ad4", "b4b4b4b4b4b4b4b4b4b4b4b4b4b4b4b4", "b4b4b4b4b4b4b4b4"),
    std::make_tuple("7d95a537ef4fd20d", "b5b5b5b5b5b5b5b5b5b5b5b5b5b5b5b5", "b5b5b5b5b5b5b5b5"),
    std::make_tuple("2b19b8d18e9e9d9e", "b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6", "b6b6b6b6b6b6b6b6"),
    std::make_tuple("90b1d81ed1930dca", "b7b7b7b7b7b7b7b7b7b7b7b7b7b7b7b7", "b7b7b7b7b7b7b7b7"),
    std::make_tuple("0d70077a42a0f3fc", "b8b8b8b8b8b8b8b8b8b8b8b8b8b8b8b8", "b8b8b8b8b8b8b8b8"),
    std::make_tuple("33be0d577e657aaa", "b9b9b9b9b9b9b9b9b9b9b9b9b9b9b9b9", "b9b9b9b9b9b9b9b9"),
    std::make_tuple("8642a8fa64b33d74", "babababababababababababababababa", "babababababababa"),
    std::make_tuple("ecefaa828e05250c", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbb"),
    std::make_tuple("bfeacc224c09b041", "bcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbc", "bcbcbcbcbcbcbcbc"),
    std::make_tuple("25ce35bbbc4ce5b6", "bdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbd", "bdbdbdbdbdbdbdbd"),
    std::make_tuple("fcf3d5fa7f3c103d", "bebebebebebebebebebebebebebebebe", "bebebebebebebebe"),
    std::make_tuple("7e8c714b5539d948", "bfbfbfbfbfbfbfbfbfbfbfbfbfbfbfbf", "bfbfbfbfbfbfbfbf"),
    std::make_tuple("5ae793705e429dcf", "c0c0c0c0c0c0c0c0c0c0c0c0c0c0c0c0", "c0c0c0c0c0c0c0c0"),
    std::make_tuple("403aca4c4d536916", "c1c1c1c1c1c1c1c1c1c1c1c1c1c1c1c1", "c1c1c1c1c1c1c1c1"),
    std::make_tuple("de7b750cf725cd86", "c2c2c2c2c2c2c2c2c2c2c2c2c2c2c2c2", "c2c2c2c2c2c2c2c2"),
    std::make_tuple("e01699bfa8b8d615", "c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3", "c3c3c3c3c3c3c3c3"),
    std::make_tuple("05ea04208311aa5b", "c4c4c4c4c4c4c4c4c4c4c4c4c4c4c4c4", "c4c4c4c4c4c4c4c4"),
    std::make_tuple("e41742febad80931", "c5c5c5c5c5c5c5c5c5c5c5c5c5c5c5c5", "c5c5c5c5c5c5c5c5"),
    std::make_tuple("3f2c325ac3f15a0f", "c6c6c6c6c6c6c6c6c6c6c6c6c6c6c6c6", "c6c6c6c6c6c6c6c6"),
    std::make_tuple("e82e2bff7127942a", "c7c7c7c7c7c7c7c7c7c7c7c7c7c7c7c7", "c7c7c7c7c7c7c7c7"),
    std::make_tuple("0cccd6d4ee2f2132", "c8c8c8c8c8c8c8c8c8c8c8c8c8c8c8c8", "c8c8c8c8c8c8c8c8"),
    std::make_tuple("beba48342116c6b8", "c9c9c9c9c9c9c9c9c9c9c9c9c9c9c9c9", "c9c9c9c9c9c9c9c9"),
    std::make_tuple("295608c4cd38451b", "cacacacacacacacacacacacacacacaca", "cacacacacacacaca"),
    std::make_tuple("3d058d6aa17e5f82", "cbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcb", "cbcbcbcbcbcbcbcb"),
    std::make_tuple("e143a92dba6ec493", "cccccccccccccccccccccccccccccccc", "cccccccccccccccc"),
    std::make_tuple("238e6c5a341bd450", "cdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcd", "cdcdcdcdcdcdcdcd"),
    std::make_tuple("8443582e6810a7ed", "cececececececececececececececece", "cececececececece"),
    std::make_tuple("e5df9d8a645559c0", "cfcfcfcfcfcfcfcfcfcfcfcfcfcfcfcf", "cfcfcfcfcfcfcfcf"),
    std::make_tuple("512620ae09acb3ba", "d0d0d0d0d0d0d0d0d0d0d0d0d0d0d0d0", "d0d0d0d0d0d0d0d0"),
    std::make_tuple("378c3a04d3a09f9a", "d1d1d1d1d1d1d1d1d1d1d1d1d1d1d1d1", "d1d1d1d1d1d1d1d1"),
    std::make_tuple("d7dede3af9410258", "d2d2d2d2d2d2d2d2d2d2d2d2d2d2d2d2", "d2d2d2d2d2d2d2d2"),
    std::make_tuple("a7e0f6a26d81b598", "d3d3d3d3d3d3d3d3d3d3d3d3d3d3d3d3", "d3d3d3d3d3d3d3d3"),
    std::make_tuple("33fc82ee6bb350f4", "d4d4d4d4d4d4d4d4d4d4d4d4d4d4d4d4", "d4d4d4d4d4d4d4d4"),
    std::make_tuple("3f663d6fb864212a", "d5d5d5d5d5d5d5d5d5d5d5d5d5d5d5d5", "d5d5d5d5d5d5d5d5"),
    std::make_tuple("99c853c822f2c451", "d6d6d6d6d6d6d6d6d6d6d6d6d6d6d6d6", "d6d6d6d6d6d6d6d6"),
    std::make_tuple("4ad4be6d0d2f57d8", "d7d7d7d7d7d7d7d7d7d7d7d7d7d7d7d7", "d7d7d7d7d7d7d7d7"),
    std::make_tuple("d6d60732a807d08b", "d8d8d8d8d8d8d8d8d8d8d8d8d8d8d8d8", "d8d8d8d8d8d8d8d8"),
    std::make_tuple("e6a6be8437ec6983", "d9d9d9d9d9d9d9d9d9d9d9d9d9d9d9d9", "d9d9d9d9d9d9d9d9"),
    std::make_tuple("472a2dead18618f6", "dadadadadadadadadadadadadadadada", "dadadadadadadada"),
    std::make_tuple("4567d7128c786b31", "dbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdb", "dbdbdbdbdbdbdbdb"),
    std::make_tuple("6954437e083cb8dd", "dcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdc", "dcdcdcdcdcdcdcdc"),
    std::make_tuple("bb0056de857988ce", "dddddddddddddddddddddddddddddddd", "dddddddddddddddd"),
    std::make_tuple("d2058501e91225a5", "dededededededededededededededede", "dededededededede"),
    std::make_tuple("e35e6b186283f441", "dfdfdfdfdfdfdfdfdfdfdfdfdfdfdfdf", "dfdfdfdfdfdfdfdf"),
    std::make_tuple("242588c5f782a93f", "e0e0e0e0e0e0e0e0e0e0e0e0e0e0e0e0", "e0e0e0e0e0e0e0e0"),
    std::make_tuple("7095a50c1e99e008", "e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1", "e1e1e1e1e1e1e1e1"),
    std::make_tuple("9933df5a78a355a8", "e2e2e2e2e2e2e2e2e2e2e2e2e2e2e2e2", "e2e2e2e2e2e2e2e2"),
    std::make_tuple("d1d945e51221b893", "e3e3e3e3e3e3e3e3e3e3e3e3e3e3e3e3", "e3e3e3e3e3e3e3e3"),
    std::make_tuple("915d915b79b927ed", "e4e4e4e4e4e4e4e4e4e4e4e4e4e4e4e4", "e4e4e4e4e4e4e4e4"),
    std::make_tuple("e0c9897a94d0f2c4", "e5e5e5e5e5e5e5e5e5e5e5e5e5e5e5e5", "e5e5e5e5e5e5e5e5"),
    std::make_tuple("911e376bf4497437", "e6e6e6e6e6e6e6e6e6e6e6e6e6e6e6e6", "e6e6e6e6e6e6e6e6"),
    std::make_tuple("b82fae4092690a95", "e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7", "e7e7e7e7e7e7e7e7"),
    std::make_tuple("e6aca65966b4ac3f", "e8e8e8e8e8e8e8e8e8e8e8e8e8e8e8e8", "e8e8e8e8e8e8e8e8"),
    std::make_tuple("dfa504dd9ccf1e78", "e9e9e9e9e9e9e9e9e9e9e9e9e9e9e9e9", "e9e9e9e9e9e9e9e9"),
    std::make_tuple("df00c0f695286d74", "eaeaeaeaeaeaeaeaeaeaeaeaeaeaeaea", "eaeaeaeaeaeaeaea"),
    std::make_tuple("a3ba29f79071549e", "ebebebebebebebebebebebebebebebeb", "ebebebebebebebeb"),
    std::make_tuple("bb46376e1cf4ec6a", "ecececececececececececececececec", "ecececececececec"),
    std::make_tuple("1195a6de7052280e", "edededededededededededededededed", "edededededededed"),
    std::make_tuple("415e756efdcb7a4a", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeee"),
    std::make_tuple("56a88197ae5924bd", "efefefefefefefefefefefefefefefef", "efefefefefefefef"),
    std::make_tuple("89951d70270c9b17", "f0f0f0f0f0f0f0f0f0f0f0f0f0f0f0f0", "f0f0f0f0f0f0f0f0"),
    std::make_tuple("2a775028d170b29c", "f1f1f1f1f1f1f1f1f1f1f1f1f1f1f1f1", "f1f1f1f1f1f1f1f1"),
    std::make_tuple("9a4cf8b7c599ef4a", "f2f2f2f2f2f2f2f2f2f2f2f2f2f2f2f2", "f2f2f2f2f2f2f2f2"),
    std::make_tuple("f9966866d43965cd", "f3f3f3f3f3f3f3f3f3f3f3f3f3f3f3f3", "f3f3f3f3f3f3f3f3"),
    std::make_tuple("80e41ccc7641e959", "f4f4f4f4f4f4f4f4f4f4f4f4f4f4f4f4", "f4f4f4f4f4f4f4f4"),
    std::make_tuple("0b7c702996413b45", "f5f5f5f5f5f5f5f5f5f5f5f5f5f5f5f5", "f5f5f5f5f5f5f5f5"),
    std::make_tuple("eb69bc3bf5b3fea5", "f6f6f6f6f6f6f6f6f6f6f6f6f6f6f6f6", "f6f6f6f6f6f6f6f6"),
    std::make_tuple("36bf2856e58435ea", "f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7", "f7f7f7f7f7f7f7f7"),
    std::make_tuple("1cd03f0a40a7b20c", "f8f8f8f8f8f8f8f8f8f8f8f8f8f8f8f8", "f8f8f8f8f8f8f8f8"),
    std::make_tuple("f56af83339036916", "f9f9f9f9f9f9f9f9f9f9f9f9f9f9f9f9", "f9f9f9f9f9f9f9f9"),
    std::make_tuple("3114b9e8f15ea604", "fafafafafafafafafafafafafafafafa", "fafafafafafafafa"),
    std::make_tuple("55bc49104267bd78", "fbfbfbfbfbfbfbfbfbfbfbfbfbfbfbfb", "fbfbfbfbfbfbfbfb"),
    std::make_tuple("1a578ab6029071ae", "fcfcfcfcfcfcfcfcfcfcfcfcfcfcfcfc", "fcfcfcfcfcfcfcfc"),
    std::make_tuple("1c2292fa2bdf8f40", "fdfdfdfdfdfdfdfdfdfdfdfdfdfdfdfd", "fdfdfdfdfdfdfdfd"),
    std::make_tuple("c7e3f87ffe503cc3", "fefefefefefefefefefefefefefefefe", "fefefefefefefefe"),
    std::make_tuple("28886d814399e782", "ffffffffffffffffffffffffffffffff", "ffffffffffffffff"),
};

#endif // __IDEATESTVECTORSSET7__

// Created by http://oleddisplay.squix.ch/ Consider a donation
// In case of problems make sure that you are using the font file with the correct version!
const char Cousine_10[] PROGMEM = {
	0x06, // Width: 6
	0x0C, // Height: 12
	0x20, // First Char: 32
	0xE0, // Numbers of Chars: 224

	// Jump Table:
	0xFF, 0xFF, 0x00, 0x06,  // 32:65535
	0x00, 0x00, 0x08, 0x06,  // 33:0
	0x00, 0x08, 0x07, 0x06,  // 34:8
	0x00, 0x0F, 0x0B, 0x06,  // 35:15
	0x00, 0x1A, 0x0B, 0x06,  // 36:26
	0x00, 0x25, 0x0C, 0x06,  // 37:37
	0x00, 0x31, 0x0C, 0x06,  // 38:49
	0x00, 0x3D, 0x07, 0x06,  // 39:61
	0x00, 0x44, 0x08, 0x06,  // 40:68
	0x00, 0x4C, 0x08, 0x06,  // 41:76
	0x00, 0x54, 0x09, 0x06,  // 42:84
	0x00, 0x5D, 0x0B, 0x06,  // 43:93
	0x00, 0x68, 0x06, 0x06,  // 44:104
	0x00, 0x6E, 0x07, 0x06,  // 45:110
	0x00, 0x75, 0x06, 0x06,  // 46:117
	0x00, 0x7B, 0x09, 0x06,  // 47:123
	0x00, 0x84, 0x0B, 0x06,  // 48:132
	0x00, 0x8F, 0x0C, 0x06,  // 49:143
	0x00, 0x9B, 0x0A, 0x06,  // 50:155
	0x00, 0xA5, 0x09, 0x06,  // 51:165
	0x00, 0xAE, 0x0B, 0x06,  // 52:174
	0x00, 0xB9, 0x09, 0x06,  // 53:185
	0x00, 0xC2, 0x0B, 0x06,  // 54:194
	0x00, 0xCD, 0x09, 0x06,  // 55:205
	0x00, 0xD6, 0x0B, 0x06,  // 56:214
	0x00, 0xE1, 0x0B, 0x06,  // 57:225
	0x00, 0xEC, 0x06, 0x06,  // 58:236
	0x00, 0xF2, 0x06, 0x06,  // 59:242
	0x00, 0xF8, 0x0B, 0x06,  // 60:248
	0x01, 0x03, 0x09, 0x06,  // 61:259
	0x01, 0x0C, 0x0B, 0x06,  // 62:268
	0x01, 0x17, 0x09, 0x06,  // 63:279
	0x01, 0x20, 0x0C, 0x06,  // 64:288
	0x01, 0x2C, 0x0C, 0x06,  // 65:300
	0x01, 0x38, 0x0B, 0x06,  // 66:312
	0x01, 0x43, 0x0B, 0x06,  // 67:323
	0x01, 0x4E, 0x0B, 0x06,  // 68:334
	0x01, 0x59, 0x0C, 0x06,  // 69:345
	0x01, 0x65, 0x09, 0x06,  // 70:357
	0x01, 0x6E, 0x0B, 0x06,  // 71:366
	0x01, 0x79, 0x0A, 0x06,  // 72:377
	0x01, 0x83, 0x0C, 0x06,  // 73:387
	0x01, 0x8F, 0x09, 0x06,  // 74:399
	0x01, 0x98, 0x0C, 0x06,  // 75:408
	0x01, 0xA4, 0x0A, 0x06,  // 76:420
	0x01, 0xAE, 0x0C, 0x06,  // 77:430
	0x01, 0xBA, 0x0A, 0x06,  // 78:442
	0x01, 0xC4, 0x0B, 0x06,  // 79:452
	0x01, 0xCF, 0x0B, 0x06,  // 80:463
	0x01, 0xDA, 0x0C, 0x06,  // 81:474
	0x01, 0xE6, 0x0C, 0x06,  // 82:486
	0x01, 0xF2, 0x0B, 0x06,  // 83:498
	0x01, 0xFD, 0x0B, 0x06,  // 84:509
	0x02, 0x08, 0x0B, 0x06,  // 85:520
	0x02, 0x13, 0x0B, 0x06,  // 86:531
	0x02, 0x1E, 0x0B, 0x06,  // 87:542
	0x02, 0x29, 0x0C, 0x06,  // 88:553
	0x02, 0x35, 0x0B, 0x06,  // 89:565
	0x02, 0x40, 0x0C, 0x06,  // 90:576
	0x02, 0x4C, 0x0A, 0x06,  // 91:588
	0x02, 0x56, 0x0A, 0x06,  // 92:598
	0x02, 0x60, 0x08, 0x06,  // 93:608
	0x02, 0x68, 0x09, 0x06,  // 94:616
	0x02, 0x71, 0x0C, 0x06,  // 95:625
	0x02, 0x7D, 0x07, 0x06,  // 96:637
	0x02, 0x84, 0x0C, 0x06,  // 97:644
	0x02, 0x90, 0x09, 0x06,  // 98:656
	0x02, 0x99, 0x0B, 0x06,  // 99:665
	0x02, 0xA4, 0x0A, 0x06,  // 100:676
	0x02, 0xAE, 0x0A, 0x06,  // 101:686
	0x02, 0xB8, 0x0B, 0x06,  // 102:696
	0x02, 0xC3, 0x0A, 0x06,  // 103:707
	0x02, 0xCD, 0x0A, 0x06,  // 104:717
	0x02, 0xD7, 0x0C, 0x06,  // 105:727
	0x02, 0xE3, 0x08, 0x06,  // 106:739
	0x02, 0xEB, 0x0A, 0x06,  // 107:747
	0x02, 0xF5, 0x0C, 0x06,  // 108:757
	0x03, 0x01, 0x0C, 0x06,  // 109:769
	0x03, 0x0D, 0x0A, 0x06,  // 110:781
	0x03, 0x17, 0x0B, 0x06,  // 111:791
	0x03, 0x22, 0x09, 0x06,  // 112:802
	0x03, 0x2B, 0x0A, 0x06,  // 113:811
	0x03, 0x35, 0x09, 0x06,  // 114:821
	0x03, 0x3E, 0x09, 0x06,  // 115:830
	0x03, 0x47, 0x0A, 0x06,  // 116:839
	0x03, 0x51, 0x0A, 0x06,  // 117:849
	0x03, 0x5B, 0x09, 0x06,  // 118:859
	0x03, 0x64, 0x0B, 0x06,  // 119:868
	0x03, 0x6F, 0x0A, 0x06,  // 120:879
	0x03, 0x79, 0x09, 0x06,  // 121:889
	0x03, 0x82, 0x0C, 0x06,  // 122:898
	0x03, 0x8E, 0x0A, 0x06,  // 123:910
	0x03, 0x98, 0x08, 0x06,  // 124:920
	0x03, 0xA0, 0x09, 0x06,  // 125:928
	0x03, 0xA9, 0x0B, 0x06,  // 126:937
	0x03, 0xB4, 0x08, 0x06,  // 127:948
	0x03, 0xBC, 0x08, 0x06,  // 128:956
	0x03, 0xC4, 0x08, 0x06,  // 129:964
	0x03, 0xCC, 0x08, 0x06,  // 130:972
	0x03, 0xD4, 0x08, 0x06,  // 131:980
	0x03, 0xDC, 0x08, 0x06,  // 132:988
	0x03, 0xE4, 0x08, 0x06,  // 133:996
	0x03, 0xEC, 0x08, 0x06,  // 134:1004
	0x03, 0xF4, 0x08, 0x06,  // 135:1012
	0x03, 0xFC, 0x08, 0x06,  // 136:1020
	0x04, 0x04, 0x08, 0x06,  // 137:1028
	0x04, 0x0C, 0x08, 0x06,  // 138:1036
	0x04, 0x14, 0x08, 0x06,  // 139:1044
	0x04, 0x1C, 0x08, 0x06,  // 140:1052
	0x04, 0x24, 0x08, 0x06,  // 141:1060
	0x04, 0x2C, 0x08, 0x06,  // 142:1068
	0x04, 0x34, 0x08, 0x06,  // 143:1076
	0x04, 0x3C, 0x08, 0x06,  // 144:1084
	0x04, 0x44, 0x08, 0x06,  // 145:1092
	0x04, 0x4C, 0x08, 0x06,  // 146:1100
	0x04, 0x54, 0x08, 0x06,  // 147:1108
	0x04, 0x5C, 0x08, 0x06,  // 148:1116
	0x04, 0x64, 0x08, 0x06,  // 149:1124
	0x04, 0x6C, 0x08, 0x06,  // 150:1132
	0x04, 0x74, 0x08, 0x06,  // 151:1140
	0x04, 0x7C, 0x08, 0x06,  // 152:1148
	0x04, 0x84, 0x08, 0x06,  // 153:1156
	0x04, 0x8C, 0x08, 0x06,  // 154:1164
	0x04, 0x94, 0x08, 0x06,  // 155:1172
	0x04, 0x9C, 0x08, 0x06,  // 156:1180
	0x04, 0xA4, 0x08, 0x06,  // 157:1188
	0x04, 0xAC, 0x08, 0x06,  // 158:1196
	0x04, 0xB4, 0x08, 0x06,  // 159:1204
	0xFF, 0xFF, 0x00, 0x06,  // 160:65535
	0x04, 0xBC, 0x08, 0x06,  // 161:1212
	0x04, 0xC4, 0x0B, 0x06,  // 162:1220
	0x04, 0xCF, 0x0A, 0x06,  // 163:1231
	0x04, 0xD9, 0x09, 0x06,  // 164:1241
	0x04, 0xE2, 0x0B, 0x06,  // 165:1250
	0x04, 0xED, 0x08, 0x06,  // 166:1261
	0x04, 0xF5, 0x0A, 0x06,  // 167:1269
	0x04, 0xFF, 0x09, 0x06,  // 168:1279
	0x05, 0x08, 0x0C, 0x06,  // 169:1288
	0x05, 0x14, 0x0B, 0x06,  // 170:1300
	0x05, 0x1F, 0x0B, 0x06,  // 171:1311
	0x05, 0x2A, 0x0C, 0x06,  // 172:1322
	0x05, 0x36, 0x07, 0x06,  // 173:1334
	0x05, 0x3D, 0x0C, 0x06,  // 174:1341
	0x05, 0x49, 0x0B, 0x06,  // 175:1353
	0x05, 0x54, 0x09, 0x06,  // 176:1364
	0x05, 0x5D, 0x0C, 0x06,  // 177:1373
	0x05, 0x69, 0x09, 0x06,  // 178:1385
	0x05, 0x72, 0x09, 0x06,  // 179:1394
	0x05, 0x7B, 0x07, 0x06,  // 180:1403
	0x05, 0x82, 0x0C, 0x06,  // 181:1410
	0x05, 0x8E, 0x0B, 0x06,  // 182:1422
	0x05, 0x99, 0x05, 0x06,  // 183:1433
	0x05, 0x9E, 0x04, 0x06,  // 184:1438
	0x05, 0xA2, 0x09, 0x06,  // 185:1442
	0x05, 0xAB, 0x09, 0x06,  // 186:1451
	0x05, 0xB4, 0x0B, 0x06,  // 187:1460
	0x05, 0xBF, 0x0C, 0x06,  // 188:1471
	0x05, 0xCB, 0x0C, 0x06,  // 189:1483
	0x05, 0xD7, 0x0C, 0x06,  // 190:1495
	0x05, 0xE3, 0x0C, 0x06,  // 191:1507
	0x05, 0xEF, 0x0C, 0x06,  // 192:1519
	0x05, 0xFB, 0x0C, 0x06,  // 193:1531
	0x06, 0x07, 0x0C, 0x06,  // 194:1543
	0x06, 0x13, 0x0C, 0x06,  // 195:1555
	0x06, 0x1F, 0x0C, 0x06,  // 196:1567
	0x06, 0x2B, 0x0C, 0x06,  // 197:1579
	0x06, 0x37, 0x0C, 0x06,  // 198:1591
	0x06, 0x43, 0x0B, 0x06,  // 199:1603
	0x06, 0x4E, 0x0C, 0x06,  // 200:1614
	0x06, 0x5A, 0x0C, 0x06,  // 201:1626
	0x06, 0x66, 0x0C, 0x06,  // 202:1638
	0x06, 0x72, 0x0C, 0x06,  // 203:1650
	0x06, 0x7E, 0x0C, 0x06,  // 204:1662
	0x06, 0x8A, 0x0C, 0x06,  // 205:1674
	0x06, 0x96, 0x0C, 0x06,  // 206:1686
	0x06, 0xA2, 0x0C, 0x06,  // 207:1698
	0x06, 0xAE, 0x0B, 0x06,  // 208:1710
	0x06, 0xB9, 0x0A, 0x06,  // 209:1721
	0x06, 0xC3, 0x0B, 0x06,  // 210:1731
	0x06, 0xCE, 0x0B, 0x06,  // 211:1742
	0x06, 0xD9, 0x0B, 0x06,  // 212:1753
	0x06, 0xE4, 0x0B, 0x06,  // 213:1764
	0x06, 0xEF, 0x0B, 0x06,  // 214:1775
	0x06, 0xFA, 0x09, 0x06,  // 215:1786
	0x07, 0x03, 0x0B, 0x06,  // 216:1795
	0x07, 0x0E, 0x0B, 0x06,  // 217:1806
	0x07, 0x19, 0x0B, 0x06,  // 218:1817
	0x07, 0x24, 0x0B, 0x06,  // 219:1828
	0x07, 0x2F, 0x0B, 0x06,  // 220:1839
	0x07, 0x3A, 0x0B, 0x06,  // 221:1850
	0x07, 0x45, 0x0B, 0x06,  // 222:1861
	0x07, 0x50, 0x0C, 0x06,  // 223:1872
	0x07, 0x5C, 0x0C, 0x06,  // 224:1884
	0x07, 0x68, 0x0C, 0x06,  // 225:1896
	0x07, 0x74, 0x0C, 0x06,  // 226:1908
	0x07, 0x80, 0x0C, 0x06,  // 227:1920
	0x07, 0x8C, 0x0C, 0x06,  // 228:1932
	0x07, 0x98, 0x0C, 0x06,  // 229:1944
	0x07, 0xA4, 0x0B, 0x06,  // 230:1956
	0x07, 0xAF, 0x0B, 0x06,  // 231:1967
	0x07, 0xBA, 0x0A, 0x06,  // 232:1978
	0x07, 0xC4, 0x0A, 0x06,  // 233:1988
	0x07, 0xCE, 0x0A, 0x06,  // 234:1998
	0x07, 0xD8, 0x0A, 0x06,  // 235:2008
	0x07, 0xE2, 0x0C, 0x06,  // 236:2018
	0x07, 0xEE, 0x0C, 0x06,  // 237:2030
	0x07, 0xFA, 0x0C, 0x06,  // 238:2042
	0x08, 0x06, 0x0C, 0x06,  // 239:2054
	0x08, 0x12, 0x0B, 0x06,  // 240:2066
	0x08, 0x1D, 0x0A, 0x06,  // 241:2077
	0x08, 0x27, 0x0B, 0x06,  // 242:2087
	0x08, 0x32, 0x0B, 0x06,  // 243:2098
	0x08, 0x3D, 0x0B, 0x06,  // 244:2109
	0x08, 0x48, 0x0B, 0x06,  // 245:2120
	0x08, 0x53, 0x0B, 0x06,  // 246:2131
	0x08, 0x5E, 0x0B, 0x06,  // 247:2142
	0x08, 0x69, 0x0B, 0x06,  // 248:2153
	0x08, 0x74, 0x0A, 0x06,  // 249:2164
	0x08, 0x7E, 0x0A, 0x06,  // 250:2174
	0x08, 0x88, 0x0A, 0x06,  // 251:2184
	0x08, 0x92, 0x09, 0x06,  // 252:2194
	0x08, 0x9B, 0x09, 0x06,  // 253:2203
	0x08, 0xA4, 0x09, 0x06,  // 254:2212
	0x08, 0xAD, 0x0B, 0x06,  // 255:2221

	// Font Data:
	0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x01,	// 33
	0x00,0x00,0x0E,0x00,0x00,0x00,0x0E,	// 34
	0x40,0x01,0xF8,0x00,0x54,0x00,0xF0,0x01,0x5C,0x00,0x10,	// 35
	0x00,0x00,0x9C,0x01,0x24,0x01,0xFE,0x03,0x24,0x01,0xC8,	// 36
	0x1C,0x00,0x94,0x01,0x5C,0x00,0xF0,0x01,0x2C,0x01,0xE0,0x01,	// 37
	0x00,0x00,0xC0,0x01,0x3C,0x01,0x64,0x01,0xDC,0x00,0x20,0x01,	// 38
	0x00,0x00,0x00,0x00,0x00,0x00,0x0E,	// 39
	0x00,0x00,0x00,0x00,0xF8,0x01,0x06,0x06,	// 40
	0x00,0x00,0x00,0x00,0x06,0x06,0xF8,0x01,	// 41
	0x00,0x00,0x00,0x00,0x14,0x00,0x0E,0x00,0x14,	// 42
	0x00,0x00,0x20,0x00,0x20,0x00,0xF8,0x00,0x20,0x00,0x20,	// 43
	0x00,0x00,0x00,0x04,0x80,0x03,	// 44
	0x00,0x00,0x00,0x00,0x40,0x00,0x40,	// 45
	0x00,0x00,0x00,0x00,0x00,0x01,	// 46
	0x00,0x00,0x80,0x01,0x60,0x00,0x18,0x00,0x06,	// 47
	0x00,0x00,0xF8,0x00,0x04,0x01,0x24,0x01,0x04,0x01,0xF8,	// 48
	0x00,0x00,0x08,0x01,0x08,0x01,0xFC,0x01,0x00,0x01,0x00,0x01,	// 49
	0x00,0x01,0x8C,0x01,0x44,0x01,0x24,0x01,0x18,0x01,	// 50
	0x88,0x00,0x04,0x01,0x24,0x01,0x64,0x01,0xD8,	// 51
	0x00,0x00,0x60,0x00,0x50,0x00,0x48,0x00,0xFC,0x01,0x40,	// 52
	0x00,0x00,0xBC,0x01,0x14,0x01,0x14,0x01,0xE4,	// 53
	0x00,0x00,0xF8,0x00,0x2C,0x01,0x14,0x01,0x14,0x01,0xE0,	// 54
	0x00,0x00,0x04,0x00,0xC4,0x01,0x34,0x00,0x0C,	// 55
	0x00,0x00,0xD8,0x00,0x24,0x01,0x24,0x01,0x24,0x01,0xD8,	// 56
	0x00,0x00,0x38,0x00,0x44,0x01,0x44,0x01,0xC4,0x01,0xF8,	// 57
	0x00,0x00,0x00,0x00,0x08,0x01,	// 58
	0x00,0x00,0x00,0x02,0x88,0x01,	// 59
	0x00,0x00,0x20,0x00,0x50,0x00,0x50,0x00,0x88,0x00,0x88,	// 60
	0x00,0x00,0x48,0x00,0x48,0x00,0x48,0x00,0x48,	// 61
	0x00,0x00,0x88,0x00,0x88,0x00,0x50,0x00,0x50,0x00,0x20,	// 62
	0x08,0x00,0x0C,0x00,0x44,0x01,0x24,0x00,0x18,	// 63
	0x00,0x00,0xF8,0x01,0xFC,0x07,0x0A,0x05,0xFA,0x05,0x0E,0x03,	// 64
	0x80,0x01,0x70,0x00,0x4C,0x00,0x5C,0x00,0xE0,0x00,0x00,0x01,	// 65
	0x00,0x00,0xFC,0x01,0x24,0x01,0x24,0x01,0x58,0x01,0xC0,	// 66
	0x00,0x00,0xF8,0x00,0x8C,0x01,0x04,0x01,0x04,0x01,0x88,	// 67
	0x00,0x00,0xFC,0x01,0x04,0x01,0x04,0x01,0x8C,0x01,0xF8,	// 68
	0x00,0x00,0xFC,0x01,0x24,0x01,0x24,0x01,0x24,0x01,0x04,0x01,	// 69
	0x00,0x00,0xFC,0x01,0x24,0x00,0x24,0x00,0x24,	// 70
	0x00,0x00,0xF8,0x00,0x8C,0x01,0x04,0x01,0x24,0x01,0xE8,	// 71
	0x00,0x00,0xFC,0x01,0x20,0x00,0x20,0x00,0xFC,0x01,	// 72
	0x00,0x00,0x04,0x01,0x04,0x01,0xFC,0x01,0x04,0x01,0x04,0x01,	// 73
	0x00,0x00,0x80,0x00,0x04,0x01,0x04,0x01,0xFC,	// 74
	0x00,0x00,0xFC,0x01,0x20,0x00,0x70,0x00,0x8C,0x00,0x00,0x01,	// 75
	0x00,0x00,0xFC,0x01,0x00,0x01,0x00,0x01,0x00,0x01,	// 76
	0x00,0x00,0xFC,0x01,0x3C,0x00,0x60,0x00,0x18,0x00,0xFC,0x01,	// 77
	0x00,0x00,0xFC,0x01,0x38,0x00,0xC0,0x00,0xFC,0x01,	// 78
	0x00,0x00,0xF8,0x00,0x8C,0x01,0x04,0x01,0x8C,0x01,0xF8,	// 79
	0x00,0x00,0xFC,0x01,0x24,0x00,0x24,0x00,0x24,0x00,0x18,	// 80
	0x00,0x00,0xF8,0x00,0x0C,0x01,0x04,0x03,0x0C,0x05,0xF8,0x04,	// 81
	0x00,0x00,0xFC,0x01,0x24,0x00,0x24,0x00,0xE4,0x00,0x18,0x01,	// 82
	0x00,0x00,0x98,0x00,0x24,0x01,0x24,0x01,0x24,0x01,0xC8,	// 83
	0x00,0x00,0x04,0x00,0x04,0x00,0xFC,0x01,0x04,0x00,0x04,	// 84
	0x00,0x00,0xFC,0x00,0x00,0x01,0x00,0x01,0x00,0x01,0xFC,	// 85
	0x04,0x00,0x38,0x00,0xC0,0x01,0xC0,0x01,0x38,0x00,0x04,	// 86
	0x7C,0x00,0x80,0x01,0x70,0x00,0x60,0x00,0xE0,0x01,0x1C,	// 87
	0x00,0x01,0x8C,0x00,0x70,0x00,0x70,0x00,0x8C,0x00,0x00,0x01,	// 88
	0x00,0x00,0x04,0x00,0x18,0x00,0xE0,0x01,0x18,0x00,0x04,	// 89
	0x00,0x00,0x84,0x01,0x44,0x01,0x24,0x01,0x14,0x01,0x0C,0x01,	// 90
	0x00,0x00,0x00,0x00,0xFE,0x07,0x02,0x04,0x02,0x04,	// 91
	0x00,0x00,0x06,0x00,0x18,0x00,0x60,0x00,0x80,0x01,	// 92
	0x00,0x00,0x02,0x04,0x02,0x04,0xFE,0x07,	// 93
	0x00,0x00,0x70,0x00,0x0C,0x00,0x1C,0x00,0x60,	// 94
	0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,	// 95
	0x00,0x00,0x00,0x00,0x02,0x00,0x04,	// 96
	0x00,0x00,0xD0,0x01,0x28,0x01,0x28,0x01,0xF8,0x01,0x00,0x01,	// 97
	0x00,0x00,0xFE,0x01,0x08,0x01,0x08,0x01,0xF0,	// 98
	0x00,0x00,0xF0,0x00,0x08,0x01,0x08,0x01,0x08,0x01,0x90,	// 99
	0x00,0x00,0xF0,0x00,0x08,0x01,0x08,0x01,0xFE,0x01,	// 100
	0x00,0x00,0xF0,0x00,0x28,0x01,0x28,0x01,0xB8,0x01,	// 101
	0x00,0x00,0x08,0x00,0xFE,0x01,0x0A,0x00,0x0A,0x00,0x02,	// 102
	0x00,0x00,0xF0,0x00,0x08,0x05,0x08,0x05,0xF8,0x03,	// 103
	0x00,0x00,0xFE,0x01,0x08,0x00,0x08,0x00,0xF8,0x01,	// 104
	0x00,0x00,0x08,0x01,0x08,0x01,0xFA,0x01,0x00,0x01,0x00,0x01,	// 105
	0x00,0x04,0x08,0x04,0x08,0x04,0xFA,0x03,	// 106
	0x00,0x00,0xFE,0x01,0x20,0x00,0xD0,0x00,0x08,0x01,	// 107
	0x00,0x00,0x00,0x01,0x02,0x01,0xFE,0x01,0x00,0x01,0x00,0x01,	// 108
	0x00,0x00,0xF8,0x01,0x08,0x00,0xF8,0x01,0x08,0x00,0xF8,0x01,	// 109
	0x00,0x00,0xF8,0x01,0x08,0x00,0x08,0x00,0xF8,0x01,	// 110
	0x00,0x00,0xF0,0x00,0x08,0x01,0x08,0x01,0x08,0x01,0xF0,	// 111
	0x00,0x00,0xF8,0x07,0x08,0x01,0x08,0x01,0xF0,	// 112
	0x00,0x00,0xF0,0x00,0x08,0x01,0x08,0x01,0xF8,0x07,	// 113
	0x00,0x00,0xF8,0x01,0x10,0x00,0x08,0x00,0x08,	// 114
	0x00,0x00,0xB8,0x01,0x28,0x01,0x48,0x01,0xD0,	// 115
	0x00,0x00,0x08,0x00,0xFC,0x01,0x08,0x01,0x08,0x01,	// 116
	0x00,0x00,0xF8,0x01,0x00,0x01,0x00,0x01,0xF8,0x01,	// 117
	0x00,0x00,0x38,0x00,0xC0,0x01,0xC0,0x01,0x38,	// 118
	0x08,0x00,0xF0,0x01,0xC0,0x01,0x60,0x00,0x80,0x01,0xF8,	// 119
	0x00,0x00,0x98,0x01,0x60,0x00,0x70,0x00,0x88,0x01,	// 120
	0x08,0x00,0x30,0x04,0xC0,0x06,0xC0,0x01,0x38,	// 121
	0x00,0x00,0x88,0x01,0x48,0x01,0x28,0x01,0x18,0x01,0x08,0x01,	// 122
	0x00,0x00,0x20,0x00,0xDE,0x07,0x02,0x04,0x02,0x04,	// 123
	0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x07,	// 124
	0x00,0x00,0x02,0x04,0x02,0x04,0xDE,0x07,0x20,	// 125
	0x00,0x00,0x10,0x00,0x10,0x00,0x30,0x00,0x20,0x00,0x20,	// 126
	0xE0,0x01,0x20,0x01,0x20,0x01,0xE0,0x01,	// 127
	0xE0,0x01,0x20,0x01,0x20,0x01,0xE0,0x01,	// 128
	0xE0,0x01,0x20,0x01,0x20,0x01,0xE0,0x01,	// 129
	0xE0,0x01,0x20,0x01,0x20,0x01,0xE0,0x01,	// 130
	0xE0,0x01,0x20,0x01,0x20,0x01,0xE0,0x01,	// 131
	0xE0,0x01,0x20,0x01,0x20,0x01,0xE0,0x01,	// 132
	0xE0,0x01,0x20,0x01,0x20,0x01,0xE0,0x01,	// 133
	0xE0,0x01,0x20,0x01,0x20,0x01,0xE0,0x01,	// 134
	0xE0,0x01,0x20,0x01,0x20,0x01,0xE0,0x01,	// 135
	0xE0,0x01,0x20,0x01,0x20,0x01,0xE0,0x01,	// 136
	0xE0,0x01,0x20,0x01,0x20,0x01,0xE0,0x01,	// 137
	0xE0,0x01,0x20,0x01,0x20,0x01,0xE0,0x01,	// 138
	0xE0,0x01,0x20,0x01,0x20,0x01,0xE0,0x01,	// 139
	0xE0,0x01,0x20,0x01,0x20,0x01,0xE0,0x01,	// 140
	0xE0,0x01,0x20,0x01,0x20,0x01,0xE0,0x01,	// 141
	0xE0,0x01,0x20,0x01,0x20,0x01,0xE0,0x01,	// 142
	0xE0,0x01,0x20,0x01,0x20,0x01,0xE0,0x01,	// 143
	0xE0,0x01,0x20,0x01,0x20,0x01,0xE0,0x01,	// 144
	0xE0,0x01,0x20,0x01,0x20,0x01,0xE0,0x01,	// 145
	0xE0,0x01,0x20,0x01,0x20,0x01,0xE0,0x01,	// 146
	0xE0,0x01,0x20,0x01,0x20,0x01,0xE0,0x01,	// 147
	0xE0,0x01,0x20,0x01,0x20,0x01,0xE0,0x01,	// 148
	0xE0,0x01,0x20,0x01,0x20,0x01,0xE0,0x01,	// 149
	0xE0,0x01,0x20,0x01,0x20,0x01,0xE0,0x01,	// 150
	0xE0,0x01,0x20,0x01,0x20,0x01,0xE0,0x01,	// 151
	0xE0,0x01,0x20,0x01,0x20,0x01,0xE0,0x01,	// 152
	0xE0,0x01,0x20,0x01,0x20,0x01,0xE0,0x01,	// 153
	0xE0,0x01,0x20,0x01,0x20,0x01,0xE0,0x01,	// 154
	0xE0,0x01,0x20,0x01,0x20,0x01,0xE0,0x01,	// 155
	0xE0,0x01,0x20,0x01,0x20,0x01,0xE0,0x01,	// 156
	0xE0,0x01,0x20,0x01,0x20,0x01,0xE0,0x01,	// 157
	0xE0,0x01,0x20,0x01,0x20,0x01,0xE0,0x01,	// 158
	0xE0,0x01,0x20,0x01,0x20,0x01,0xE0,0x01,	// 159
	0x00,0x00,0x00,0x00,0x00,0x00,0xE8,0x03,	// 161
	0x00,0x00,0xF0,0x00,0x08,0x01,0x0C,0x03,0x08,0x01,0x90,	// 162
	0x20,0x01,0xF8,0x01,0x24,0x01,0x24,0x01,0x04,0x01,	// 163
	0x00,0x00,0xF8,0x00,0x88,0x00,0x88,0x00,0xF8,	// 164
	0x00,0x00,0xA4,0x00,0xB8,0x00,0xE0,0x01,0xB8,0x00,0xA4,	// 165
	0x00,0x00,0x00,0x00,0x00,0x00,0x9E,0x07,	// 166
	0x00,0x00,0x6E,0x06,0x92,0x04,0x92,0x04,0x64,0x03,	// 167
	0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x02,	// 168
	0x00,0x00,0x78,0x00,0xF6,0x01,0x8A,0x01,0x8A,0x01,0x86,0x01,	// 169
	0x00,0x00,0x3C,0x00,0x2C,0x00,0x2C,0x00,0x3C,0x00,0x20,	// 170
	0x00,0x00,0x60,0x00,0x90,0x00,0x00,0x00,0x60,0x00,0x90,	// 171
	0x00,0x00,0x20,0x00,0x20,0x00,0x20,0x00,0x20,0x00,0xE0,0x01,	// 172
	0x00,0x00,0x00,0x00,0x40,0x00,0x40,	// 173
	0x00,0x00,0x78,0x00,0xFE,0x01,0x2A,0x01,0x6A,0x01,0x9E,0x01,	// 174
	0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,	// 175
	0x00,0x00,0x00,0x00,0x18,0x00,0x24,0x00,0x18,	// 176
	0x00,0x00,0x10,0x01,0x10,0x01,0x7C,0x01,0x10,0x01,0x10,0x01,	// 177
	0x00,0x00,0x00,0x00,0x36,0x00,0x2A,0x00,0x26,	// 178
	0x00,0x00,0x00,0x00,0x22,0x00,0x2A,0x00,0x36,	// 179
	0x00,0x00,0x00,0x00,0x04,0x00,0x02,	// 180
	0x00,0x00,0xF8,0x07,0x00,0x01,0x00,0x01,0x00,0x01,0xF8,0x01,	// 181
	0x00,0x00,0x38,0x00,0x3C,0x00,0xFC,0x0F,0xFC,0x0F,0x04,	// 182
	0x00,0x00,0x00,0x00,0x20,	// 183
	0x00,0x06,0x00,0x04,	// 184
	0x00,0x00,0x00,0x00,0x24,0x00,0x3E,0x00,0x20,	// 185
	0x00,0x00,0x18,0x00,0x24,0x00,0x24,0x00,0x18,	// 186
	0x00,0x00,0x90,0x00,0x60,0x00,0x00,0x00,0x90,0x00,0x60,	// 187
	0x24,0x00,0x3C,0x01,0xE0,0x00,0xF0,0x00,0xCC,0x00,0xE0,0x01,	// 188
	0x24,0x00,0x3C,0x01,0xE0,0x00,0x18,0x01,0xA4,0x01,0x60,0x01,	// 189
	0x24,0x00,0x2C,0x01,0xF4,0x00,0xF0,0x00,0xCC,0x00,0xE0,0x01,	// 190
	0x00,0x00,0x80,0x01,0x40,0x02,0x28,0x02,0x00,0x03,0x00,0x01,	// 191
	0x80,0x01,0x70,0x00,0x4D,0x00,0x5C,0x00,0xE0,0x00,0x00,0x01,	// 192
	0x80,0x01,0x70,0x00,0x4C,0x00,0x5D,0x00,0xE0,0x00,0x00,0x01,	// 193
	0x80,0x01,0x70,0x00,0x4D,0x00,0x5D,0x00,0xE0,0x00,0x00,0x01,	// 194
	0x80,0x01,0x71,0x00,0x4D,0x00,0x5D,0x00,0xE1,0x00,0x00,0x01,	// 195
	0x00,0x00,0xC0,0x01,0x79,0x00,0x44,0x00,0x79,0x00,0xC0,0x01,	// 196
	0x00,0x01,0xE2,0x00,0x5D,0x00,0x4D,0x00,0x72,0x00,0x80,0x01,	// 197
	0x80,0x01,0x70,0x00,0x4C,0x00,0xFC,0x01,0x24,0x01,0x24,0x01,	// 198
	0x00,0x00,0xF8,0x00,0x84,0x01,0x84,0x07,0x84,0x01,0xC8,	// 199
	0x00,0x00,0xFC,0x01,0x24,0x01,0x25,0x01,0x24,0x01,0x04,0x01,	// 200
	0x00,0x00,0xFC,0x01,0x24,0x01,0x25,0x01,0x24,0x01,0x04,0x01,	// 201
	0x00,0x00,0xFC,0x01,0x25,0x01,0x25,0x01,0x25,0x01,0x04,0x01,	// 202
	0x00,0x00,0xFC,0x01,0x25,0x01,0x24,0x01,0x25,0x01,0x24,0x01,	// 203
	0x00,0x00,0x04,0x01,0x04,0x01,0xFD,0x01,0x04,0x01,0x04,0x01,	// 204
	0x00,0x00,0x04,0x01,0x04,0x01,0xFD,0x01,0x04,0x01,0x04,0x01,	// 205
	0x00,0x00,0x04,0x01,0x05,0x01,0xFD,0x01,0x05,0x01,0x04,0x01,	// 206
	0x00,0x00,0x04,0x01,0x05,0x01,0xFC,0x01,0x05,0x01,0x04,0x01,	// 207
	0x20,0x00,0xFC,0x01,0x24,0x01,0x24,0x01,0x8C,0x01,0xF8,	// 208
	0x00,0x00,0xFC,0x01,0x39,0x00,0xC1,0x00,0xFC,0x01,	// 209
	0x00,0x00,0xF8,0x00,0x8C,0x01,0x05,0x01,0x8C,0x01,0xF8,	// 210
	0x00,0x00,0xF8,0x00,0x8C,0x01,0x05,0x01,0x8C,0x01,0xF8,	// 211
	0x00,0x00,0xF8,0x00,0x8D,0x01,0x05,0x01,0x8D,0x01,0xF8,	// 212
	0x00,0x00,0xF8,0x00,0x8D,0x01,0x05,0x01,0x8D,0x01,0xF8,	// 213
	0x00,0x00,0xF8,0x00,0x8D,0x01,0x04,0x01,0x8D,0x01,0xF8,	// 214
	0x00,0x00,0xC8,0x00,0x30,0x00,0x30,0x00,0xC8,	// 215
	0x00,0x00,0xF8,0x01,0xCC,0x01,0x24,0x01,0x9C,0x01,0xFC,	// 216
	0x00,0x00,0xFC,0x00,0x00,0x01,0x01,0x01,0x00,0x01,0xFC,	// 217
	0x00,0x00,0xFC,0x00,0x00,0x01,0x01,0x01,0x00,0x01,0xFC,	// 218
	0x00,0x00,0xFC,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0xFC,	// 219
	0x00,0x00,0xFC,0x00,0x01,0x01,0x00,0x01,0x01,0x01,0xFC,	// 220
	0x00,0x00,0x0C,0x00,0x10,0x00,0xE1,0x01,0x18,0x00,0x04,	// 221
	0x00,0x00,0xFC,0x01,0x88,0x00,0x88,0x00,0x88,0x00,0x70,	// 222
	0x00,0x00,0xFC,0x01,0x02,0x00,0x32,0x01,0x2E,0x01,0xC0,0x01,	// 223
	0x00,0x00,0xD0,0x01,0x2A,0x01,0x28,0x01,0xF8,0x01,0x00,0x01,	// 224
	0x00,0x00,0xD0,0x01,0x28,0x01,0x2A,0x01,0xF8,0x01,0x00,0x01,	// 225
	0x00,0x00,0xD0,0x01,0x2A,0x01,0x2A,0x01,0xF8,0x01,0x00,0x01,	// 226
	0x00,0x00,0xD4,0x01,0x2A,0x01,0x2C,0x01,0xFE,0x01,0x00,0x01,	// 227
	0x00,0x00,0xD0,0x01,0x2A,0x01,0x28,0x01,0xFA,0x01,0x00,0x01,	// 228
	0x00,0x00,0xD2,0x01,0x2D,0x01,0x2F,0x01,0xF8,0x01,0x00,0x01,	// 229
	0x00,0x00,0xF0,0x01,0x28,0x01,0xF0,0x00,0x28,0x01,0xB8,	// 230
	0x00,0x00,0xF0,0x00,0x88,0x01,0x88,0x07,0x88,0x01,0x90,	// 231
	0x00,0x00,0xF0,0x00,0x2A,0x01,0x28,0x01,0xB8,0x01,	// 232
	0x00,0x00,0xF0,0x00,0x28,0x01,0x2A,0x01,0xB8,0x01,	// 233
	0x00,0x00,0xF0,0x00,0x2C,0x01,0x2A,0x01,0xB8,0x01,	// 234
	0x00,0x00,0xF0,0x00,0x2A,0x01,0x28,0x01,0x3A,0x01,	// 235
	0x00,0x00,0x08,0x01,0x0A,0x01,0xFC,0x01,0x00,0x01,0x00,0x01,	// 236
	0x00,0x00,0x08,0x01,0x08,0x01,0xFA,0x01,0x00,0x01,0x00,0x01,	// 237
	0x00,0x00,0x08,0x01,0x0A,0x01,0xFA,0x01,0x04,0x01,0x00,0x01,	// 238
	0x00,0x00,0x08,0x01,0x0A,0x01,0xF8,0x01,0x02,0x01,0x00,0x01,	// 239
	0x00,0x00,0xF0,0x00,0x0C,0x01,0x0A,0x01,0x0E,0x01,0xF0,	// 240
	0x00,0x00,0xFC,0x01,0x0A,0x00,0x0C,0x00,0xFA,0x01,	// 241
	0x00,0x00,0xF0,0x00,0x0A,0x01,0x0A,0x01,0x08,0x01,0xF0,	// 242
	0x00,0x00,0xF0,0x00,0x08,0x01,0x0C,0x01,0x0A,0x01,0xF0,	// 243
	0x00,0x00,0xF0,0x00,0x0C,0x01,0x0A,0x01,0x0C,0x01,0xF0,	// 244
	0x00,0x00,0xF4,0x00,0x0A,0x01,0x0E,0x01,0x0E,0x01,0xF0,	// 245
	0x00,0x00,0xF0,0x00,0x0A,0x01,0x08,0x01,0x0A,0x01,0xF0,	// 246
	0x00,0x00,0x20,0x00,0x20,0x00,0xA8,0x00,0x20,0x00,0x20,	// 247
	0x00,0x00,0xF0,0x01,0xC8,0x01,0x28,0x01,0x28,0x01,0xF8,	// 248
	0x00,0x00,0xF8,0x01,0x02,0x01,0x00,0x01,0xF8,0x01,	// 249
	0x00,0x00,0xF8,0x01,0x00,0x01,0x02,0x01,0xF8,0x01,	// 250
	0x00,0x00,0xF8,0x01,0x02,0x01,0x02,0x01,0xF8,0x01,	// 251
	0x00,0x00,0xF8,0x01,0x02,0x01,0x00,0x01,0xFA,	// 252
	0x08,0x00,0x30,0x04,0xC0,0x06,0xC2,0x01,0x38,	// 253
	0x00,0x00,0xFE,0x07,0x08,0x01,0x08,0x01,0xF0,	// 254
	0x00,0x00,0x18,0x04,0xE2,0x06,0x80,0x03,0x62,0x00,0x18	// 255
};


























































































































































































































































#ifndef FONT_6X8_H
#define FONT_6X8_H
 
//  6x8 ru/en

const unsigned char font_6x8_Data[] =
{
// 0x00 - пустое знакоместо.
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

  // 0x01 - лицо с улыбкой.
  0x00, 0x3e, 0x45, 0x51, 0x45, 0x3e,

  // 0x02 - лицо с улыбкой закрашенное.
  0x00, 0x3e, 0x6b, 0x6f, 0x6b, 0x3e,

  // 0x03 - червы (сердце).
  0x00, 0x1c, 0x3e, 0x7c, 0x3e, 0x1c,

  // 0x04 - бубны.
  0x00, 0x18, 0x3c, 0x7e, 0x3c, 0x18,

  // 0x05 - крести.
  0x00, 0x30, 0x36, 0x7f, 0x36, 0x30,

  // 0x06 - вини.
  0x00, 0x18, 0x5c, 0x7e, 0x5c, 0x18,

  // 0x07 - закрашенный круг по центру.
  0x00, 0x00, 0x18, 0x18, 0x00, 0x00,

  // 0x08 - закрашенный круг по центру в инверсии.
  0xff, 0xff, 0xe7, 0xe7, 0xff, 0xff,

  // 0x09 - незакрашенный круг по центру.
  0x00, 0x3c, 0x24, 0x24, 0x3c, 0x00,

  // 0x0a - незакрашенный круг по центру в инверсии (кольцо).
  0xff, 0xc3, 0xdb, 0xdb, 0xc3, 0xff,

  // 0x0b - мужской символ (круг со стрелкой вверх).
  0x00, 0x30, 0x48, 0x4a, 0x36, 0x0e,

  // 0x0c - женский символ (круг с крестом внизу).
  0x00, 0x06, 0x29, 0x79, 0x29, 0x06,

  // 0x0d - нота I.
  0x00, 0x60, 0x70, 0x3f, 0x02, 0x04,

  // 0x0e - нота II.
  0x00, 0x60, 0x7e, 0x0a, 0x35, 0x3f,

  // 0x0f - солнце (круг с расходящимися лучами).
  0x00, 0x2a, 0x1c, 0x36, 0x1c, 0x2a,

  // 0x10 - толстая стрелка вправо.
  0x00, 0x00, 0x7f, 0x3e, 0x1c, 0x08,

  // 0x11 - толстая стрелка влево.
  0x00, 0x08, 0x1c, 0x3e, 0x7f, 0x00,

  // 0x12 - тонкая стрелка вверх-вниз.
  0x00, 0x14, 0x36, 0x7f, 0x36, 0x14,

  // 0x13 - два восклицательных знака.
  0x00, 0x00, 0x5f, 0x00, 0x5f, 0x00,

  // 0x14 - символ "Пи".
  0x00, 0x06, 0x09, 0x7f, 0x01, 0x7f,

  // 0x15 - символ параграфа.
  0x00, 0x22, 0x4d, 0x55, 0x59, 0x22,

  // 0x16 - часы
  0x7e, 0x81, 0x9f, 0x91, 0x91, 0x7e,

  // 0x17 - тонкая стрелка вверх-вниз с подчеркиванием.
  0x00, 0x14, 0xb6, 0xff, 0xb6, 0x14,

  // 0x18 - тонкая стрелка вверх.
  0x00, 0x04, 0x06, 0x7f, 0x06, 0x04,

  // 0x19 - тонкая стрелка вниз.
  0x00, 0x10, 0x30, 0x7f, 0x30, 0x10,

  // 0x1a - тонкая стрелка вправо.
  0x00, 0x08, 0x08, 0x3e, 0x1c, 0x08,

  // 0x1b - тонкая стрелка влево.
  0x00, 0x08, 0x1c, 0x3e, 0x08, 0x08,

  // 0x1c - символ отступа.
  0x00, 0x78, 0x40, 0x40, 0x40, 0x40,

  // 0x1d - тонкая стрелка влево-вправо.
  0x00, 0x08, 0x3e, 0x08, 0x3e, 0x08,

  // 0x1e - толстая стрелка вверх.
  0x00, 0x30, 0x3c, 0x3f, 0x3c, 0x30,

  // 0x1f - толстая стрелка вниз.
  0x00, 0x03, 0x0f, 0x3f, 0x0f, 0x03,

  // 0x20 - пробел (пустое знакоместо).
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

  // 0x21 - восклицательный знак.
  0x00, 0x00, 0x06, 0x5f, 0x06, 0x00,

  // 0x22 - двойная кавычка.
  0x00, 0x07, 0x03, 0x00, 0x07, 0x03,

  // 0x23 - решетка.
  0x00, 0x24, 0x7e, 0x24, 0x7e, 0x24,

  // 0x24 - доллар.
  0x00, 0x24, 0x2b, 0x6a, 0x12, 0x00,

  // 0x25 - процент.
  0x00, 0x63, 0x13, 0x08, 0x64, 0x63,

  // 0x26 - амперсанд.
  0x00, 0x36, 0x49, 0x56, 0x20, 0x50,

  // 0x27 - апостроф.
  0x00, 0x00, 0x07, 0x03, 0x00, 0x00,

  // 0x28 - открывающая скобка.
  0x00, 0x00, 0x3e, 0x41, 0x00, 0x00,

  // 0x29 - закрывающая скобка.
  0x00, 0x00, 0x41, 0x3e, 0x00, 0x00,

  // 0x2a - звездочка (умножение).
  0x00, 0x08, 0x3e, 0x1c, 0x3e, 0x08,

  // 0x2b - плюс.
  0x00, 0x08, 0x08, 0x3e, 0x08, 0x08,

  // 0x2c - запятая.
  0x00, 0x00, 0xe0, 0x60, 0x00, 0x00,

  // 0x2d - тире.
  0x00, 0x08, 0x08, 0x08, 0x08, 0x08,

  // 0x2e - точка.
  0x00, 0x00, 0x60, 0x60, 0x00, 0x00,

  // 0x2f - слеш слева-направо ('/').
  0x00, 0x20, 0x10, 0x08, 0x04, 0x02,

  // 0x30 - '0'.
  0x00, 0x3e, 0x41, 0x41, 0x41, 0x3e,

  // 0x31 - '1'.
  0x00, 0x00, 0x42, 0x7f, 0x40, 0x00,

  // 0x32 - '2'.
  0x00, 0x62, 0x51, 0x49, 0x49, 0x46,

  // 0x33 - '3'.
  0x00, 0x22, 0x49, 0x49, 0x49, 0x36,

  // 0x34 - '4'.
  0x00, 0x18, 0x14, 0x12, 0x7f, 0x10,

  // 0x35 - '5'.
  0x00, 0x2f, 0x49, 0x49, 0x49, 0x31,

  // 0x36 - '6'.
  0x00, 0x3c, 0x4a, 0x49, 0x49, 0x30,

  // 0x37 - '7'.
  0x00, 0x01, 0x71, 0x09, 0x05, 0x03,

  // 0x38 - '8'.
  0x00, 0x36, 0x49, 0x49, 0x49, 0x36,

  // 0x39 - '9'.
  0x00, 0x06, 0x49, 0x49, 0x29, 0x1e,

  // 0x3a - двоеточие.
  0x00, 0x00, 0x6c, 0x6c, 0x00, 0x00,

  // 0x3b - точка с запятой.
  0x00, 0x00, 0xec, 0x6c, 0x00, 0x00,

  // 0x3c - меньше.
  0x00, 0x08, 0x14, 0x22, 0x41, 0x00,

  // 0x3d - равно.
  0x00, 0x24, 0x24, 0x24, 0x24, 0x24,

  // 0x3e - больше.
  0x00, 0x00, 0x41, 0x22, 0x14, 0x08,

  // 0x3f - вопросительный знак.
  0x00, 0x02, 0x01, 0x59, 0x09, 0x06,

  // 0x40 - "собака" ('@').
  0x00, 0x3e, 0x41, 0x5d, 0x55, 0x1e,

  // 0x41 - 'A'.
  0x00, 0x7e, 0x11, 0x11, 0x11, 0x7e,

  // 0x42 - 'B'.
  0x00, 0x7f, 0x49, 0x49, 0x49, 0x36,

  // 0x43 - 'C'.
  0x00, 0x3e, 0x41, 0x41, 0x41, 0x22,

  // 0x44 - 'D'.
  0x00, 0x7f, 0x41, 0x41, 0x41, 0x3e,

  // 0x45 - 'E'.
  0x00, 0x7f, 0x49, 0x49, 0x49, 0x41,

  // 0x46 - 'F'.
  0x00, 0x7f, 0x09, 0x09, 0x09, 0x01,

  // 0x47 - 'G'.
  0x00, 0x3e, 0x41, 0x49, 0x49, 0x7a,

  // 0x48 - 'H'.
  0x00, 0x7f, 0x08, 0x08, 0x08, 0x7f,

  // 0x49 - 'I'.
  0x00, 0x00, 0x41, 0x7f, 0x41, 0x00,

  // 0x4a - 'J'.
  0x00, 0x30, 0x40, 0x40, 0x40, 0x3f,

  // 0x4b - 'K'.
  0x00, 0x7f, 0x08, 0x14, 0x22, 0x41,

  // 0x4c - 'L'.
  0x00, 0x7f, 0x40, 0x40, 0x40, 0x40,

  // 0x4d - 'M'.
  0x00, 0x7f, 0x02, 0x04, 0x02, 0x7f,

  // 0x4e - 'N'.
  0x00, 0x7f, 0x02, 0x04, 0x08, 0x7f,

  // 0x4f - 'O'.
  0x00, 0x3e, 0x41, 0x41, 0x41, 0x3e,

  // 0x50 - 'P'.
  0x00, 0x7f, 0x09, 0x09, 0x09, 0x06,

  // 0x51 - 'Q'.
  0x00, 0x3e, 0x41, 0x51, 0x21, 0x5e,

  // 0x52 - 'R'.
  0x00, 0x7f, 0x09, 0x09, 0x19, 0x66,

  // 0x53 - 'S'.
  0x00, 0x26, 0x49, 0x49, 0x49, 0x32,

  // 0x54 - 'T'.
  0x00, 0x01, 0x01, 0x7f, 0x01, 0x01,

  // 0x55 - 'U'.
  0x00, 0x3f, 0x40, 0x40, 0x40, 0x3f,

  // 0x56 - 'V'.
  0x00, 0x1f, 0x20, 0x40, 0x20, 0x1f,

  // 0x57 - 'W'.
  0x00, 0x3f, 0x40, 0x3c, 0x40, 0x3f,

  // 0x58 - 'X'.
  0x00, 0x63, 0x14, 0x08, 0x14, 0x63,

  // 0x59 - 'Y'.
  0x00, 0x07, 0x08, 0x70, 0x08, 0x07,

  // 0x5a - 'Z'.
  0x00, 0x71, 0x49, 0x45, 0x43, 0x00,

  // 0x5b - '['.
  0x00, 0x00, 0x7f, 0x41, 0x41, 0x00,

  // 0x5c - '\'.
  0x00, 0x02, 0x04, 0x08, 0x10, 0x20,

  // 0x5d - ']'.
  0x00, 0x00, 0x41, 0x41, 0x7f, 0x00,

  // 0x5e - '^'.
  0x00, 0x04, 0x02, 0x01, 0x02, 0x04,

  // 0x5f - '_'.
  0x80, 0x80, 0x80, 0x80, 0x80, 0x80,

  // 0x60 - обратный апостроф.
  0x00, 0x00, 0x03, 0x07, 0x00, 0x00,

  // 0x61 - 'a'.
  0x00, 0x20, 0x54, 0x54, 0x54, 0x78,

  // 0x62 - 'b'.
  0x00, 0x7f, 0x44, 0x44, 0x44, 0x38,

  // 0x63 - 'c'.
  0x00, 0x38, 0x44, 0x44, 0x44, 0x28,

  // 0x64 - 'd'.
  0x00, 0x38, 0x44, 0x44, 0x44, 0x7f,

  // 0x65 - 'e'.
  0x00, 0x38, 0x54, 0x54, 0x54, 0x08,

  // 0x66 - 'f'.
  0x00, 0x08, 0x7e, 0x09, 0x09, 0x00,

  // 0x67 - 'g'.
  0x00, 0x18, 0xa4, 0xa4, 0xa4, 0x7c,

  // 0x68 - 'h'.
  0x00, 0x7f, 0x04, 0x04, 0x78, 0x00,

  // 0x69 - 'i'.
  0x00, 0x00, 0x00, 0x7d, 0x40, 0x00,

  // 0x6a - 'j'.
  0x00, 0x40, 0x80, 0x84, 0x7d, 0x00,

  // 0x6b - 'k'.
  0x00, 0x7f, 0x10, 0x28, 0x44, 0x00,

  // 0x6c - 'l'.
  0x00, 0x00, 0x00, 0x7f, 0x40, 0x00,

  // 0x6d - 'm'.
  0x00, 0x7c, 0x04, 0x18, 0x04, 0x78,

  // 0x6e - 'n'.
  0x00, 0x7c, 0x04, 0x04, 0x78, 0x00,

  // 0x6f - 'o'.
  0x00, 0x38, 0x44, 0x44, 0x44, 0x38,

  // 0x70 - 'p'.
  0x00, 0xfc, 0x44, 0x44, 0x44, 0x38,

  // 0x71 - 'q'.
  0x00, 0x38, 0x44, 0x44, 0x44, 0xfc,

  // 0x72 - 'r'.
  0x00, 0x44, 0x78, 0x44, 0x04, 0x08,

  // 0x73 - 's'.
  0x00, 0x08, 0x54, 0x54, 0x54, 0x20,

  // 0x74 - 't'.
  0x00, 0x04, 0x3e, 0x44, 0x24, 0x00,

  // 0x75 - 'u'.
  0x00, 0x3c, 0x40, 0x20, 0x7c, 0x00,

  // 0x76 - 'v'.
  0x00, 0x1c, 0x20, 0x40, 0x20, 0x1c,

  // 0x77 - 'w'.
  0x00, 0x3c, 0x60, 0x30, 0x60, 0x3c,

  // 0x78 - 'x'.
  0x00, 0x6c, 0x10, 0x10, 0x6c, 0x00,

  // 0x79 - 'y'.
  0x00, 0x9c, 0xa0, 0x60, 0x3c, 0x00,

  // 0x7a - 'z'.
  0x00, 0x64, 0x54, 0x54, 0x4c, 0x00,

  // 0x7b - '{'.
  0x00, 0x08, 0x3e, 0x41, 0x41, 0x00,

  // 0x7c - '|'.
  0x00, 0x00, 0x00, 0x77, 0x00, 0x00,

  // 0x7d - '}'.
  0x00, 0x00, 0x41, 0x41, 0x3e, 0x08,

  // 0x7e - '~'.
  0xc0, 0x88, 0x88, 0x88, 0xc0, 0x00, 

  // 0x7f - "gradus".
  0x00, 0x07, 0x05, 0x07, 0x00, 0x00,

  // 0x80 - сетка из точек разреженная.
  0x44, 0x11, 0x44, 0x11, 0x44, 0x11,

  // 0x81 - сетка из точек густая.
  0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55,

  // 0x82 - сетка из черточек.
  0xbb, 0xee, 0xbb, 0xee, 0xbb, 0xee,

  // 0x83 - символы рамок псевдографики - вертикальная черта.
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00,

  // 0x84 - псевдографика - вертикальная черта с отводом по центру влево.
  0x08, 0x08, 0x08, 0xff, 0x00, 0x00,

  // 0x85 - псевдографика - вертикальная черта с двойным отводом по центру влево.
  0x0a, 0x0a, 0x0a, 0xff, 0x00, 0x00,

  // 0x86 - псевдографика - двойная вертикальная черта с отводом по центру влево.
  0x08, 0xff, 0x00, 0xff, 0x00, 0x00,

  // 0x87 - псевдографика - верхний правый угол с двойной вертикальной чертой.
  0x08, 0xf8, 0x08, 0xf8, 0x00, 0x00,

  // 0x88 - псевдографика - верхний правый угол с двойной горизонтальной чертой.
  0x0a, 0x0a, 0x0a, 0xfe, 0x00, 0x00,

  // 0x89 - псевдографика - двойная вертикальная черта с двойным отводом по центру влево.
  0x0a, 0xfb, 0x00, 0xff, 0x00, 0x00,

  // 0x8a - псевдографика - двойная вертикальная черта.
  0x00, 0xff, 0x00, 0xff, 0x00, 0x00,

  // 0x8b - псевдографика - двойной верхний правый угол.
  0x0a, 0xfa, 0x02, 0xfe, 0x00, 0x00,

  // 0x8c - псевдографика - двойной нижний правый угол.
  0x0a, 0x0b, 0x08, 0x0f, 0x00, 0x00,

  // 0x8d - псевдографика - нижний правый угол с двойной вертикальной чертой.
  0x08, 0x0f, 0x08, 0x0f, 0x00, 0x00,

  // 0x8e - псевдографика - нижний правый угол с двойной горизонтальной чертой.
  0x0a, 0x0a, 0x0a, 0x0f, 0x00, 0x00,

  // 0x8f - псевдографика - верхний правый угол.
  0x08, 0x08, 0x08, 0xf8, 0x00, 0x00,

  // 0x90 - псевдографика - нижний левый угол.
  0x00, 0x00, 0x00, 0x0f, 0x08, 0x08,

  // 0x91 - псевдографика - горизонтальная черта с отводом по центру вверх.
  0x08, 0x08, 0x08, 0x0f, 0x08, 0x08,

  // 0x92 - псевдографика - горизонтальная черта с отводом по центру вниз.
  0x08, 0x08, 0x08, 0xf8, 0x08, 0x08,

  // 0x93 - псевдографика - вертикальная черта с отводом по центру вправо.
  0x00, 0x00, 0x00, 0xff, 0x08, 0x08,

  // 0x94 - псевдографика - горизонтальная черта по центру.
  0x08, 0x08, 0x08, 0x08, 0x08, 0x08,

  // 0x95 - псевдографика - перекрестие.
  0x08, 0x08, 0x08, 0xff, 0x08, 0x08,

  // 0x96 - псевдографика - вертикальная черта с двойным отводом по центру вправо.
  0x00, 0x00, 0x00, 0xff, 0x0a, 0x0a,

  // 0x97 - псевдографика - двойная вертикальная черта с отводом по центру вправо.
  0x00, 0xff, 0x00, 0xff, 0x08, 0x08,

  // 0x98 - псевдографика - двойной нижний левый угол.
  0x00, 0x0f, 0x08, 0x0b, 0x0a, 0x0a,

  // 0x99 - псевдографика - двойной верхний левый угол.
  0x00, 0xfe, 0x02, 0xfa, 0x0a, 0x0a,

  // 0x9a - псевдографика - двойная горизонтальная черта с двойным отводом по центру вверх.
  0x0a, 0x0b, 0x08, 0x0b, 0x0a, 0x0a,

  // 0x9b - псевдографика - двойная горизонтальная черта с двойным отводом по центру вниз.
  0x0a, 0xfa, 0x02, 0xfa, 0x0a, 0x0a,

  // 0x9c - псевдографика - двойная вертикальная черта с двойным отводом по центру вправо.
  0x00, 0xff, 0x00, 0xfb, 0x0a, 0x0a,

  // 0x9d - псевдографика - двойная горизонтальная черта по центру.
  0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a,

  // 0x9e - псевдографика - двойное перекрестие.
  0x0a, 0xfb, 0x00, 0xfb, 0x0a, 0x0a,

  // 0x9f - псевдографика - двойная горизонтальная черта с отводом по центру вверх.
  0x0a, 0x0a, 0x0a, 0x0b, 0x0a, 0x0a,

  // 0xa0 - псевдографика - горизонтальная черта с двойным отводом по центру вверх.
  0x08, 0x0f, 0x08, 0x0f, 0x08, 0x08,

  // 0xa1 - псевдографика - двойная горизонтальная черта с отводом по центру вниз.
  0x0a, 0x0a, 0x0a, 0xfa, 0x0a, 0x0a,

  // 0xa2 - псевдографика - горизонтальная черта с двойным отводом по центру вниз.
  0x08, 0xf8, 0x08, 0xf8, 0x08, 0x08,

  // 0xa3 - псевдографика - нижний левый угол, двойная вертикальная черта.
  0x00, 0x0f, 0x08, 0x0f, 0x08, 0x08,

  // 0xa4 - псевдографика - нижний левый угол, двойная горизонтальная черта.
  0x00, 0x00, 0x00, 0x0f, 0x0a, 0x0a,

  // 0xa5 - псевдографика - верхний левый угол, двойная горизонтальная черта.
  0x00, 0x00, 0x00, 0xfe, 0x0a, 0x0a,

  // 0xa6 - псевдографика - верхний левый угол, двойная вертикальная черта.
  0x00, 0xf8, 0x08, 0xf8, 0x08, 0x08,

  // 0xa7 - псевдографика - двойная вертикальная черта по центру с отводами вправо и влево.
  0x08, 0xff, 0x08, 0xff, 0x08, 0x08,

  // 0xa8 - 'Ё'.
  0x00, 0x7e, 0x4b, 0x4a, 0x4b, 0x42,

  // 0xa9 - псевдографика - двойная горизонтальная черта по центру с отводами вверх и вниз.
  0x0a, 0x0a, 0x0a, 0xff, 0x0a, 0x0a,

  // 0xaa - псевдографика - нижний правый угол.
  0x08, 0x08, 0x08, 0x0f, 0x00, 0x00,

  // 0xab - псевдографика - верхний левый угол.
  0x00, 0x00, 0x00, 0xf8, 0x08, 0x08,

  // 0xac - псевдографика - закрашенное знакоместо.
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

  // 0xad - псевдографика - закрашенная нижняя половина знакоместа.
  0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0,

  // 0xae - псевдографика - закрашенная левая половина знакоместа.
  0xff, 0xff, 0xff, 0x00, 0x00, 0x00,

  // 0xaf - псевдографика - закрашенная правая половина знакоместа.
  0x00, 0x00, 0x00, 0xff, 0xff, 0xff,

  // 0xb0 - псевдографика - закрашенная верхняя половина знакоместа.
  0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f,

  // 0xb1 - зеркальная 'Э'.
  0x00, 0x3e, 0x49, 0x49, 0x41, 0x22,

  // 0xb2 - зеркальная 'э'.
  0x00, 0x38, 0x54, 0x54, 0x44, 0x28,

  // 0xb3 - 'I' с двумя точками вверху.
  0x00, 0x01, 0x40, 0x7e, 0x40, 0x01,

  // 0xb4 - 'i' с двумя точками вверху.
  0x00, 0x00, 0x01, 0x7c, 0x41, 0x00,

  // 0xb5 - 'Y' с тильдой вверху ('~').
  0x00, 0x27, 0x48, 0x4b, 0x48, 0x3f,

  // 0xb6 - 'y' с тильдой вверху ('~').
  0x00, 0x9d, 0xa2, 0x62, 0x3d, 0x00,

  // 0xb7 - маленький кружок вверху.
  0x00, 0x06, 0x09, 0x09, 0x06, 0x00,

  // 0xb8 - 'ё'.
  0x00, 0x38, 0x55, 0x54, 0x55, 0x08,

  // 0xb9 - большой закрашенный круг по центру.
  0x00, 0x00, 0x18, 0x18, 0x00, 0x00,

  // 0xba - маленький закрашенный круг по центру.
  0x00, 0x00, 0x08, 0x00, 0x00, 0x00,

  // 0xbb - символ корня квадратного.
  0x00, 0x30, 0x40, 0x3e, 0x02, 0x02,

  // 0xbc - '№'.
  0x7f, 0x06, 0x18, 0x7f, 0x13, 0x13,

  // 0xbd - "солнце".
  0x2a, 0x3e, 0x14, 0x14, 0x3e, 0x2a,

  // 0xbe - закрашенный квадрат по центру.
  0x00, 0x3c, 0x3c, 0x3c, 0x3c, 0x00,

  // 0xbf - пустое знакоместо.
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

  // 0xc0 - 'А'.
  0x00, 0x7e, 0x11, 0x11, 0x11, 0x7e,

  // 0xc1 - 'Б'.
  0x00, 0x7f, 0x49, 0x49, 0x49, 0x31,

  // 0xc2 - 'В'.
  0x00, 0x7f, 0x49, 0x49, 0x49, 0x36,

  // 0xc3 - 'Г'.
  0x00, 0x7f, 0x01, 0x01, 0x01, 0x01,

  // 0xc4 - 'Д'.
  0xc0, 0x7e, 0x41, 0x41, 0x7f, 0xc0,

  // 0xc5 - 'Е'.
  0x00, 0x7f, 0x49, 0x49, 0x49, 0x41,

  // 0xc6 - 'Ж'.
  0x00, 0x77, 0x08, 0x7f, 0x08, 0x77,

  // 0xc7 - 'З'.
  0x22, 0x49, 0x49, 0x49, 0x36, 0x00,

  // 0xc8 - 'И'.
  0x00, 0x7f, 0x20, 0x10, 0x08, 0x7f,

  // 0xc9 - 'Й'.
  0x00, 0x7e, 0x21, 0x11, 0x09, 0x7e,

  // 0xca - 'К'.
  0x00, 0x7f, 0x08, 0x14, 0x22, 0x41,

  // 0xcb - 'Л'.
  0x00, 0x40, 0x7e, 0x01, 0x01, 0x7f,

  // 0xcc - 'М'.
  0x00, 0x7f, 0x02, 0x04, 0x02, 0x7f,

  // 0xcd - 'Н'.
  0x00, 0x7f, 0x08, 0x08, 0x08, 0x7f,

  // 0xce - 'О'.
  0x00, 0x3e, 0x41, 0x41, 0x41, 0x3e,

  // 0xcf - 'П'.
  0x00, 0x7f, 0x01, 0x01, 0x01, 0x7f,

  // 0xd0 - 'Р'.
  0x00, 0x7f, 0x09, 0x09, 0x09, 0x06,

  // 0xd1 - 'С'.
  0x00, 0x3e, 0x41, 0x41, 0x41, 0x22,

  // 0xd2 - 'Т'.
  0x00, 0x01, 0x01, 0x7f, 0x01, 0x01,

  // 0xd3 - 'У'.
  0x00, 0x27, 0x48, 0x48, 0x48, 0x3f,

  // 0xd4 - 'Ф'.
  0x00, 0x0e, 0x11, 0x7f, 0x11, 0x0e,

  // 0xd5 - 'Х'.
  0x00, 0x63, 0x14, 0x08, 0x14, 0x63,

  // 0xd6 - 'Ц'.
  0x00, 0x7f, 0x40, 0x40, 0x7f, 0xc0,

  // 0xd7 - 'Ч'.
  0x00, 0x07, 0x08, 0x08, 0x08, 0x7f,

  // 0xd8 - 'Ш'.
  0x00, 0x7f, 0x40, 0x7f, 0x40, 0x7f,

  // 0xd9 - 'Щ'.
  0x00, 0x7f, 0x40, 0x7f, 0x40, 0xff,

  // 0xda - 'Ъ'.
  0x03, 0x01, 0x7f, 0x48, 0x48, 0x30,

  // 0xdb - 'Ы'.
  0x00, 0x7f, 0x48, 0x48, 0x30, 0x7f,

  // 0xdc - 'Ь'.
  0x00, 0x7f, 0x48, 0x48, 0x48, 0x30,

  // 0xdd - 'Э'.
  0x00, 0x22, 0x41, 0x49, 0x49, 0x3e,

  // 0xde - 'Ю'.
  0x00, 0x7f, 0x08, 0x3e, 0x41, 0x3e,

  // 0xdf - 'Я'.
  0x00, 0x66, 0x19, 0x09, 0x09, 0x7f,

  // 0xe0 - 'а'.
  0x00, 0x20, 0x54, 0x54, 0x54, 0x78,

  // 0xe1 - 'б'.
  0x00, 0x3c, 0x4a, 0x4a, 0x4a, 0x31,

  // 0xe2 - 'в'.
  0x00, 0x7c, 0x54, 0x54, 0x54, 0x28,

  // 0xe3 - 'г'.
  0x00, 0x7c, 0x04, 0x04, 0x0c, 0x00,

  // 0xe4 - 'д'.
  0xc0, 0x78, 0x44, 0x44, 0x7c, 0xc0,

  // 0xe5 - 'е'.
  0x00, 0x38, 0x54, 0x54, 0x54, 0x08,

  // 0xe6 - 'ж'.
  0x00, 0x6c, 0x10, 0x7c, 0x10, 0x6c,

  // 0xe7 - 'з'.
  0x00, 0x28, 0x44, 0x54, 0x54, 0x28,

  // 0xe8 - 'и'.
  0x00, 0x7c, 0x20, 0x10, 0x08, 0x7c,

  // 0xe9 - 'й'.
  0x00, 0x7c, 0x20, 0x12, 0x0a, 0x7c,

  // 0xea - 'к'.
  0x00, 0x7c, 0x10, 0x28, 0x44, 0x00,

  // 0xeb - 'л'.
  0x40, 0x38, 0x04, 0x04, 0x7c, 0x00,

  // 0xec - 'м'.
  0x00, 0x7c, 0x08, 0x10, 0x08, 0x7c,

  // 0xed - 'н'.
  0x00, 0x7c, 0x10, 0x10, 0x10, 0x7c,

  // 0xee - 'о'.
  0x00, 0x38, 0x44, 0x44, 0x44, 0x38,

  // 0xef - 'п'.
  0x00, 0x7c, 0x04, 0x04, 0x04, 0x7c,

  // 0xf0 - 'р'.
  0x00, 0xfc, 0x44, 0x44, 0x44, 0x38,

  // 0xf1 - 'с'.
  0x00, 0x38, 0x44, 0x44, 0x44, 0x28,

  // 0xf2 - 'т'.
  0x00, 0x04, 0x04, 0x7c, 0x04, 0x04,

  // 0xf3 - 'у'.
  0x00, 0x9c, 0xa0, 0x60, 0x3c, 0x00,

  // 0xf4 - 'ф'.
  0x00, 0x18, 0x24, 0x7c, 0x24, 0x18,

  // 0xf5 - 'х'.
  0x00, 0x6c, 0x10, 0x10, 0x6c, 0x00,

  // 0xf6 - 'ц'.
  0x00, 0x7c, 0x40, 0x40, 0x7c, 0xc0,

  // 0xf7 - 'ч'.
  0x00, 0x0c, 0x10, 0x10, 0x10, 0x7c,

  // 0xf8 - 'ш'.
  0x00, 0x7c, 0x40, 0x7c, 0x40, 0x7c,

  // 0xf9 - 'щ'.
  0x00, 0x7c, 0x40, 0x7c, 0x40, 0xfc,

  // 0xfa - 'ъ'.
  0x0c, 0x04, 0x7c, 0x50, 0x50, 0x20,

  // 0xfb - 'ы'.
  0x00, 0x7c, 0x50, 0x50, 0x20, 0x7c,

  // 0xfc - 'ь'.
  0x00, 0x7c, 0x50, 0x50, 0x50, 0x20,

  // 0xfd - 'э'.
  0x00, 0x28, 0x44, 0x54, 0x54, 0x38,

  // 0xfe - 'ю'.
  0x00, 0x7c, 0x10, 0x38, 0x44, 0x38,

  // 0xff - 'я'.
  0x00, 0x48, 0x34, 0x14, 0x14, 0x7c
};

#endif  //FONT_6X8_H
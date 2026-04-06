/*                              KUNST KEY MATRIX / LAYOUT MAPPING

      ╭────────────┬─────────────╮        ╭─────────────┬─────────────╮    
  ╭───╯  0   1   2 │  3   4   5  ╰──╮ ╭───╯ LT2 LT1 LT0 │ RT0 RT1 RT2 ╰───╮
  │  6   7   8   9 │ 10  11  12  13 │ │ LB3 LB2 LB1 LB0 │ RB0 RB1 RB2 RB3 │
  ╰───────╮ 14  15 │ 16  17 ╭───────╯ ╰───────╮ LH1 LH0 │ RH0 RH1 ╭───────╯
          ╰────────┴────────╯                 ╰─────────┴─────────╯         */

#pragma once

#define LT0  2  // left-top row
#define LT1  1
#define LT2  0

#define RT0  3  // right-top row
#define RT1  4
#define RT2  5

#define LB0 9  // left-bottom row
#define LB1 8
#define LB2 7
#define LB3 6

#define RB0 10  // right-bottom row
#define RB1 11
#define RB2 12
#define RB3 13

#define LH0 15  // left thumb keys
#define LH1 14

#define RH0 16  // right thumb keys
#define RH1 17

#define NUMROW 
#define KEYS_L LT0 LT1 LT2 LB0 LB1 LB2 LB3
#define KEYS_R RT0 RT1 RT2 RB0 RB1 RB2 RB3
#define THUMBS_L LH0 LH1
#define THUMBS_R RH0 RH1
#define THUMBS THUMBS_L THUMBS_R
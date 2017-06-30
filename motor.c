/*
 * EGG OpenSource EBike firmware
 *
 * Copyright (C) Casainho, 2015, 2106, 2017.
 *
 * Released under the GPL License, Version 3
 */

#include <stdint.h>
#include <stdio.h>
#include "stm8s_gpio.h"
#include "motor.h"
#include "gpio.h"
#include "motor.h"

#if (SVM_TABLE == SVM)
uint8_t ui8_svm_table [SVM_TABLE_LEN] =
{
    131	,
    137	,
    142	,
    147	,
    153	,
    158	,
    163	,
    169	,
    174	,
    179	,
    185	,
    190	,
    195	,
    200	,
    205	,
    210	,
    215	,
    220	,
    225	,
    230	,
    235	,
    238	,
    240	,
    241	,
    243	,
    244	,
    245	,
    246	,
    247	,
    248	,
    249	,
    250	,
    251	,
    252	,
    252	,
    253	,
    253	,
    254	,
    254	,
    254	,
    255	,
    255	,
    255	,
    255	,
    255	,
    254	,
    254	,
    254	,
    253	,
    253	,
    252	,
    252	,
    251	,
    250	,
    249	,
    248	,
    247	,
    246	,
    245	,
    244	,
    242	,
    241	,
    240	,
    238	,
    239	,
    240	,
    242	,
    243	,
    244	,
    246	,
    247	,
    248	,
    249	,
    250	,
    250	,
    251	,
    252	,
    253	,
    253	,
    254	,
    254	,
    254	,
    255	,
    255	,
    255	,
    255	,
    255	,
    255	,
    254	,
    254	,
    254	,
    253	,
    253	,
    252	,
    251	,
    251	,
    250	,
    249	,
    248	,
    247	,
    246	,
    245	,
    243	,
    242	,
    241	,
    239	,
    238	,
    233	,
    228	,
    223	,
    218	,
    213	,
    208	,
    203	,
    198	,
    193	,
    188	,
    182	,
    177	,
    172	,
    167	,
    161	,
    156	,
    150	,
    145	,
    140	,
    134	,
    129	,
    123	,
    118	,
    113	,
    107	,
    102	,
    96	,
    91	,
    86	,
    80	,
    75	,
    70	,
    65	,
    59	,
    54	,
    49	,
    44	,
    39	,
    34	,
    29	,
    25	,
    20	,
    16	,
    15	,
    13	,
    12	,
    11	,
    9	,
    8	,
    7	,
    6	,
    5	,
    4	,
    4	,
    3	,
    2	,
    2	,
    1	,
    1	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    1	,
    1	,
    2	,
    2	,
    3	,
    4	,
    4	,
    5	,
    6	,
    7	,
    8	,
    9	,
    11	,
    12	,
    13	,
    15	,
    16	,
    16	,
    14	,
    13	,
    11	,
    10	,
    9	,
    8	,
    7	,
    6	,
    5	,
    4	,
    3	,
    3	,
    2	,
    1	,
    1	,
    1	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    1	,
    1	,
    2	,
    2	,
    3	,
    4	,
    5	,
    6	,
    7	,
    8	,
    9	,
    10	,
    11	,
    12	,
    14	,
    15	,
    17	,
    22	,
    27	,
    31	,
    36	,
    41	,
    46	,
    51	,
    56	,
    62	,
    67	,
    72	,
    77	,
    83	,
    88	,
    93	,
    99	,
    104	,
    109	,
    115	,
    120	,
    126
};
#elif (SVM_TABLE == SINE_SVM)
uint8_t ui8_svm_table [SVM_TABLE_LEN] =
{
    8	,
    19	,
    30	,
    41	,
    51	,
    62	,
    73	,
    84	,
    94	,
    105	,
    115	,
    126	,
    136	,
    146	,
    157	,
    167	,
    177	,
    187	,
    196	,
    206	,
    216	,
    223	,
    226	,
    228	,
    231	,
    234	,
    236	,
    239	,
    241	,
    243	,
    245	,
    246	,
    248	,
    249	,
    251	,
    252	,
    253	,
    254	,
    254	,
    255	,
    255	,
    256	,
    256	,
    256	,
    255	,
    255	,
    254	,
    254	,
    253	,
    252	,
    251	,
    249	,
    248	,
    246	,
    245	,
    243	,
    241	,
    238	,
    236	,
    234	,
    231	,
    228	,
    225	,
    222	,
    224	,
    227	,
    229	,
    232	,
    235	,
    237	,
    239	,
    241	,
    243	,
    245	,
    247	,
    249	,
    250	,
    251	,
    252	,
    253	,
    254	,
    255	,
    255	,
    255	,
    256	,
    256	,
    255	,
    255	,
    255	,
    254	,
    253	,
    252	,
    251	,
    250	,
    249	,
    247	,
    246	,
    244	,
    242	,
    240	,
    238	,
    235	,
    233	,
    230	,
    227	,
    224	,
    221	,
    212	,
    202	,
    192	,
    182	,
    172	,
    162	,
    152	,
    142	,
    132	,
    121	,
    111	,
    100	,
    90	,
    79	,
    68	,
    58	,
    47	,
    36	,
    25	,
    14	,
    4	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0
};
#elif (SVM_TABLE == SINE)
uint8_t ui8_svm_table [SVM_TABLE_LEN] =
{
    5	,
    12	,
    18	,
    24	,
    30	,
    37	,
    43	,
    49	,
    55	,
    61	,
    67	,
    73	,
    79	,
    85	,
    91	,
    97	,
    103	,
    108	,
    114	,
    120	,
    125	,
    131	,
    136	,
    141	,
    146	,
    151	,
    156	,
    161	,
    166	,
    171	,
    176	,
    180	,
    184	,
    189	,
    193	,
    197	,
    201	,
    205	,
    208	,
    212	,
    215	,
    219	,
    222	,
    225	,
    228	,
    231	,
    233	,
    236	,
    238	,
    240	,
    243	,
    244	,
    246	,
    248	,
    249	,
    251	,
    252	,
    253	,
    254	,
    255	,
    255	,
    256	,
    256	,
    256	,
    256	,
    256	,
    255	,
    255	,
    254	,
    253	,
    253	,
    251	,
    250	,
    249	,
    247	,
    246	,
    244	,
    242	,
    240	,
    237	,
    235	,
    232	,
    230	,
    227	,
    224	,
    221	,
    217	,
    214	,
    211	,
    207	,
    203	,
    199	,
    195	,
    191	,
    187	,
    183	,
    178	,
    174	,
    169	,
    164	,
    159	,
    154	,
    149	,
    144	,
    139	,
    134	,
    128	,
    123	,
    117	,
    112	,
    106	,
    100	,
    94	,
    89	,
    83	,
    77	,
    71	,
    65	,
    59	,
    53	,
    46	,
    40	,
    34	,
    28	,
    22	,
    15	,
    9	,
    3	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0	,
    0
};
#endif


int8_t get_motor_rotation_direction (void)
{
  return LEFT;
}

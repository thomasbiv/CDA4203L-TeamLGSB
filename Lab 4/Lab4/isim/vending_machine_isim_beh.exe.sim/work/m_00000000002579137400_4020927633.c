/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Xilinx/CDA 4203L/Lab4/FSM.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {5U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {4U, 0U};
static unsigned int ng11[] = {8U, 0U};
static unsigned int ng12[] = {9U, 0U};
static unsigned int ng13[] = {10U, 0U};
static unsigned int ng14[] = {11U, 0U};
static unsigned int ng15[] = {12U, 0U};
static unsigned int ng16[] = {13U, 0U};



static void Always_56_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;

LAB0:    t1 = (t0 + 6528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 6848);
    *((int *)t2) = 1;
    t3 = (t0 + 6560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);

LAB5:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 4408U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB12:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5128);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 5608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB14:    t5 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 5, t5, 5);
    if (t30 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t30 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t30 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t30 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t30 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t30 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t30 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t30 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t30 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng12)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t30 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng13)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t30 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng14)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t30 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng15)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t30 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng16)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t30 == 1)
        goto LAB41;

LAB42:
LAB43:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(57, ng0);

LAB13:    xsi_set_current_line(58, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 5608);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 5);
    goto LAB12;

LAB15:    xsi_set_current_line(65, ng0);

LAB44:    xsi_set_current_line(66, ng0);
    t7 = ((char*)((ng3)));
    t8 = (t0 + 5128);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3928U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB48;

LAB45:    if (t18 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t6) = 1;

LAB48:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 4088U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB55;

LAB52:    if (t18 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t6) = 1;

LAB55:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 4248U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB62;

LAB59:    if (t18 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t6) = 1;

LAB62:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB63;

LAB64:
LAB65:
LAB58:
LAB51:    goto LAB43;

LAB17:    xsi_set_current_line(76, ng0);

LAB66:    xsi_set_current_line(77, ng0);
    t3 = (t0 + 3928U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t3 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB70;

LAB67:    if (t18 != 0)
        goto LAB69;

LAB68:    *((unsigned int *)t6) = 1;

LAB70:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB71;

LAB72:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 4088U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB78;

LAB75:    if (t18 != 0)
        goto LAB77;

LAB76:    *((unsigned int *)t6) = 1;

LAB78:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB79;

LAB80:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 4248U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB86;

LAB83:    if (t18 != 0)
        goto LAB85;

LAB84:    *((unsigned int *)t6) = 1;

LAB86:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB87;

LAB88:
LAB89:
LAB81:
LAB73:    goto LAB43;

LAB19:    xsi_set_current_line(87, ng0);

LAB91:    xsi_set_current_line(88, ng0);
    t3 = (t0 + 3928U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t3 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB95;

LAB92:    if (t18 != 0)
        goto LAB94;

LAB93:    *((unsigned int *)t6) = 1;

LAB95:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB96;

LAB97:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 4088U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB103;

LAB100:    if (t18 != 0)
        goto LAB102;

LAB101:    *((unsigned int *)t6) = 1;

LAB103:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB104;

LAB105:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 4248U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB111;

LAB108:    if (t18 != 0)
        goto LAB110;

LAB109:    *((unsigned int *)t6) = 1;

LAB111:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB112;

LAB113:
LAB114:
LAB106:
LAB98:    goto LAB43;

LAB21:    xsi_set_current_line(98, ng0);

LAB116:    xsi_set_current_line(99, ng0);
    t3 = (t0 + 3928U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t3 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB120;

LAB117:    if (t18 != 0)
        goto LAB119;

LAB118:    *((unsigned int *)t6) = 1;

LAB120:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB121;

LAB122:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 4088U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB128;

LAB125:    if (t18 != 0)
        goto LAB127;

LAB126:    *((unsigned int *)t6) = 1;

LAB128:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB129;

LAB130:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 4248U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB136;

LAB133:    if (t18 != 0)
        goto LAB135;

LAB134:    *((unsigned int *)t6) = 1;

LAB136:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB137;

LAB138:
LAB139:
LAB131:
LAB123:    goto LAB43;

LAB23:    xsi_set_current_line(109, ng0);

LAB141:    xsi_set_current_line(110, ng0);
    t3 = (t0 + 3928U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t3 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB145;

LAB142:    if (t18 != 0)
        goto LAB144;

LAB143:    *((unsigned int *)t6) = 1;

LAB145:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB146;

LAB147:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 4088U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB153;

LAB150:    if (t18 != 0)
        goto LAB152;

LAB151:    *((unsigned int *)t6) = 1;

LAB153:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB154;

LAB155:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 4248U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB161;

LAB158:    if (t18 != 0)
        goto LAB160;

LAB159:    *((unsigned int *)t6) = 1;

LAB161:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB162;

LAB163:
LAB164:
LAB156:
LAB148:    goto LAB43;

LAB25:    xsi_set_current_line(120, ng0);

LAB166:    xsi_set_current_line(121, ng0);
    t3 = (t0 + 3928U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t3 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB170;

LAB167:    if (t18 != 0)
        goto LAB169;

LAB168:    *((unsigned int *)t6) = 1;

LAB170:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB171;

LAB172:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 4088U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB178;

LAB175:    if (t18 != 0)
        goto LAB177;

LAB176:    *((unsigned int *)t6) = 1;

LAB178:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB179;

LAB180:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 4248U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB186;

LAB183:    if (t18 != 0)
        goto LAB185;

LAB184:    *((unsigned int *)t6) = 1;

LAB186:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB187;

LAB188:
LAB189:
LAB181:
LAB173:    goto LAB43;

LAB27:    xsi_set_current_line(131, ng0);

LAB191:    xsi_set_current_line(132, ng0);
    t3 = (t0 + 3928U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t3 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB195;

LAB192:    if (t18 != 0)
        goto LAB194;

LAB193:    *((unsigned int *)t6) = 1;

LAB195:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB196;

LAB197:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 4088U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB203;

LAB200:    if (t18 != 0)
        goto LAB202;

LAB201:    *((unsigned int *)t6) = 1;

LAB203:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB204;

LAB205:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 4248U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB211;

LAB208:    if (t18 != 0)
        goto LAB210;

LAB209:    *((unsigned int *)t6) = 1;

LAB211:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB212;

LAB213:
LAB214:
LAB206:
LAB198:    goto LAB43;

LAB29:    xsi_set_current_line(142, ng0);

LAB216:    xsi_set_current_line(143, ng0);
    t3 = (t0 + 3928U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t3 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB220;

LAB217:    if (t18 != 0)
        goto LAB219;

LAB218:    *((unsigned int *)t6) = 1;

LAB220:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB221;

LAB222:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 4088U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB228;

LAB225:    if (t18 != 0)
        goto LAB227;

LAB226:    *((unsigned int *)t6) = 1;

LAB228:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB229;

LAB230:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 4248U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB236;

LAB233:    if (t18 != 0)
        goto LAB235;

LAB234:    *((unsigned int *)t6) = 1;

LAB236:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB237;

LAB238:
LAB239:
LAB231:
LAB223:    goto LAB43;

LAB31:    xsi_set_current_line(153, ng0);

LAB241:    xsi_set_current_line(154, ng0);
    t3 = (t0 + 3928U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t3 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB245;

LAB242:    if (t18 != 0)
        goto LAB244;

LAB243:    *((unsigned int *)t6) = 1;

LAB245:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB246;

LAB247:    xsi_set_current_line(157, ng0);
    t2 = (t0 + 4088U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB253;

LAB250:    if (t18 != 0)
        goto LAB252;

LAB251:    *((unsigned int *)t6) = 1;

LAB253:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB254;

LAB255:    xsi_set_current_line(160, ng0);
    t2 = (t0 + 4248U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB261;

LAB258:    if (t18 != 0)
        goto LAB260;

LAB259:    *((unsigned int *)t6) = 1;

LAB261:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB262;

LAB263:
LAB264:
LAB256:
LAB248:    goto LAB43;

LAB33:    xsi_set_current_line(164, ng0);

LAB266:    xsi_set_current_line(165, ng0);
    t3 = (t0 + 4568U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t3 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB270;

LAB267:    if (t18 != 0)
        goto LAB269;

LAB268:    *((unsigned int *)t6) = 1;

LAB270:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB271;

LAB272:    xsi_set_current_line(169, ng0);
    t2 = (t0 + 4728U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB278;

LAB275:    if (t18 != 0)
        goto LAB277;

LAB276:    *((unsigned int *)t6) = 1;

LAB278:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB279;

LAB280:    xsi_set_current_line(173, ng0);

LAB283:    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB281:
LAB273:    goto LAB43;

LAB35:    xsi_set_current_line(177, ng0);

LAB284:    xsi_set_current_line(178, ng0);
    t3 = (t0 + 4568U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t3 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB288;

LAB285:    if (t18 != 0)
        goto LAB287;

LAB286:    *((unsigned int *)t6) = 1;

LAB288:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB289;

LAB290:    xsi_set_current_line(186, ng0);
    t2 = (t0 + 4728U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB298;

LAB295:    if (t18 != 0)
        goto LAB297;

LAB296:    *((unsigned int *)t6) = 1;

LAB298:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB299;

LAB300:    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB301:
LAB291:    xsi_set_current_line(196, ng0);
    t2 = (t0 + 6336);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB305;
    goto LAB1;

LAB37:    xsi_set_current_line(200, ng0);

LAB306:    xsi_set_current_line(201, ng0);
    t3 = (t0 + 4568U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t3 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB310;

LAB307:    if (t18 != 0)
        goto LAB309;

LAB308:    *((unsigned int *)t6) = 1;

LAB310:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB311;

LAB312:    xsi_set_current_line(209, ng0);
    t2 = (t0 + 4728U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB320;

LAB317:    if (t18 != 0)
        goto LAB319;

LAB318:    *((unsigned int *)t6) = 1;

LAB320:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB321;

LAB322:    xsi_set_current_line(217, ng0);

LAB327:    xsi_set_current_line(218, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(219, ng0);
    t2 = (t0 + 6336);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB328;
    goto LAB1;

LAB39:    xsi_set_current_line(224, ng0);

LAB329:    xsi_set_current_line(225, ng0);
    t3 = (t0 + 4568U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t3 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB333;

LAB330:    if (t18 != 0)
        goto LAB332;

LAB331:    *((unsigned int *)t6) = 1;

LAB333:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB334;

LAB335:    xsi_set_current_line(233, ng0);
    t2 = (t0 + 4728U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB343;

LAB340:    if (t18 != 0)
        goto LAB342;

LAB341:    *((unsigned int *)t6) = 1;

LAB343:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB344;

LAB345:    xsi_set_current_line(241, ng0);

LAB350:    xsi_set_current_line(242, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(243, ng0);
    t2 = (t0 + 6336);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB351;
    goto LAB1;

LAB41:    xsi_set_current_line(248, ng0);

LAB352:    xsi_set_current_line(249, ng0);
    t3 = (t0 + 4568U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t3 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB356;

LAB353:    if (t18 != 0)
        goto LAB355;

LAB354:    *((unsigned int *)t6) = 1;

LAB356:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB357;

LAB358:    xsi_set_current_line(257, ng0);
    t2 = (t0 + 4728U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB366;

LAB363:    if (t18 != 0)
        goto LAB365;

LAB364:    *((unsigned int *)t6) = 1;

LAB366:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB367;

LAB368:
LAB369:
LAB359:    goto LAB43;

LAB47:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB48;

LAB49:    xsi_set_current_line(70, ng0);
    t22 = ((char*)((ng4)));
    t28 = (t0 + 5608);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 5);
    goto LAB51;

LAB54:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB55;

LAB56:    xsi_set_current_line(72, ng0);
    t22 = ((char*)((ng5)));
    t28 = (t0 + 5608);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 5);
    goto LAB58;

LAB61:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB62;

LAB63:    xsi_set_current_line(74, ng0);
    t22 = ((char*)((ng6)));
    t28 = (t0 + 5608);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 5);
    goto LAB65;

LAB69:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB70;

LAB71:    xsi_set_current_line(77, ng0);

LAB74:    xsi_set_current_line(78, ng0);
    t28 = ((char*)((ng7)));
    t29 = (t0 + 5608);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 5);
    goto LAB73;

LAB77:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB78;

LAB79:    xsi_set_current_line(80, ng0);

LAB82:    xsi_set_current_line(81, ng0);
    t22 = ((char*)((ng8)));
    t28 = (t0 + 5608);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 5);
    goto LAB81;

LAB85:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB86;

LAB87:    xsi_set_current_line(83, ng0);

LAB90:    xsi_set_current_line(84, ng0);
    t22 = ((char*)((ng5)));
    t28 = (t0 + 5608);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 5);
    goto LAB89;

LAB94:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB95;

LAB96:    xsi_set_current_line(88, ng0);

LAB99:    xsi_set_current_line(89, ng0);
    t28 = ((char*)((ng9)));
    t29 = (t0 + 5608);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 5);
    goto LAB98;

LAB102:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB103;

LAB104:    xsi_set_current_line(91, ng0);

LAB107:    xsi_set_current_line(92, ng0);
    t22 = ((char*)((ng10)));
    t28 = (t0 + 5608);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 5);
    goto LAB106;

LAB110:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB111;

LAB112:    xsi_set_current_line(94, ng0);

LAB115:    xsi_set_current_line(95, ng0);
    t22 = ((char*)((ng8)));
    t28 = (t0 + 5608);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 5);
    goto LAB114;

LAB119:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB120;

LAB121:    xsi_set_current_line(99, ng0);

LAB124:    xsi_set_current_line(100, ng0);
    t28 = ((char*)((ng11)));
    t29 = (t0 + 5608);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 5);
    goto LAB123;

LAB127:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB128;

LAB129:    xsi_set_current_line(102, ng0);

LAB132:    xsi_set_current_line(103, ng0);
    t22 = ((char*)((ng4)));
    t28 = (t0 + 5608);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 5);
    goto LAB131;

LAB135:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB136;

LAB137:    xsi_set_current_line(105, ng0);

LAB140:    xsi_set_current_line(106, ng0);
    t22 = ((char*)((ng10)));
    t28 = (t0 + 5608);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 5);
    goto LAB139;

LAB144:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB145;

LAB146:    xsi_set_current_line(110, ng0);

LAB149:    xsi_set_current_line(111, ng0);
    t28 = ((char*)((ng12)));
    t29 = (t0 + 5608);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 5);
    goto LAB148;

LAB152:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB153;

LAB154:    xsi_set_current_line(113, ng0);

LAB157:    xsi_set_current_line(114, ng0);
    t22 = ((char*)((ng7)));
    t28 = (t0 + 5608);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 5);
    goto LAB156;

LAB160:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB161;

LAB162:    xsi_set_current_line(116, ng0);

LAB165:    xsi_set_current_line(117, ng0);
    t22 = ((char*)((ng4)));
    t28 = (t0 + 5608);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 5);
    goto LAB164;

LAB169:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB170;

LAB171:    xsi_set_current_line(121, ng0);

LAB174:    xsi_set_current_line(122, ng0);
    t28 = ((char*)((ng13)));
    t29 = (t0 + 5608);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 5);
    goto LAB173;

LAB177:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB178;

LAB179:    xsi_set_current_line(124, ng0);

LAB182:    xsi_set_current_line(125, ng0);
    t22 = ((char*)((ng9)));
    t28 = (t0 + 5608);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 5);
    goto LAB181;

LAB185:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB186;

LAB187:    xsi_set_current_line(127, ng0);

LAB190:    xsi_set_current_line(128, ng0);
    t22 = ((char*)((ng7)));
    t28 = (t0 + 5608);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 5);
    goto LAB189;

LAB194:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB195;

LAB196:    xsi_set_current_line(132, ng0);

LAB199:    xsi_set_current_line(133, ng0);
    t28 = ((char*)((ng14)));
    t29 = (t0 + 5608);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 5);
    goto LAB198;

LAB202:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB203;

LAB204:    xsi_set_current_line(135, ng0);

LAB207:    xsi_set_current_line(136, ng0);
    t22 = ((char*)((ng11)));
    t28 = (t0 + 5608);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 5);
    goto LAB206;

LAB210:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB211;

LAB212:    xsi_set_current_line(138, ng0);

LAB215:    xsi_set_current_line(139, ng0);
    t22 = ((char*)((ng9)));
    t28 = (t0 + 5608);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 5);
    goto LAB214;

LAB219:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB220;

LAB221:    xsi_set_current_line(143, ng0);

LAB224:    xsi_set_current_line(144, ng0);
    t28 = ((char*)((ng15)));
    t29 = (t0 + 5608);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 5);
    goto LAB223;

LAB227:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB228;

LAB229:    xsi_set_current_line(146, ng0);

LAB232:    xsi_set_current_line(147, ng0);
    t22 = ((char*)((ng12)));
    t28 = (t0 + 5608);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 5);
    goto LAB231;

LAB235:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB236;

LAB237:    xsi_set_current_line(149, ng0);

LAB240:    xsi_set_current_line(150, ng0);
    t22 = ((char*)((ng11)));
    t28 = (t0 + 5608);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 5);
    goto LAB239;

LAB244:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB245;

LAB246:    xsi_set_current_line(154, ng0);

LAB249:    xsi_set_current_line(155, ng0);
    t28 = ((char*)((ng16)));
    t29 = (t0 + 5608);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 5);
    goto LAB248;

LAB252:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB253;

LAB254:    xsi_set_current_line(157, ng0);

LAB257:    xsi_set_current_line(158, ng0);
    t22 = ((char*)((ng13)));
    t28 = (t0 + 5608);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 5);
    goto LAB256;

LAB260:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB261;

LAB262:    xsi_set_current_line(160, ng0);

LAB265:    xsi_set_current_line(161, ng0);
    t22 = ((char*)((ng12)));
    t28 = (t0 + 5608);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 5);
    goto LAB264;

LAB269:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB270;

LAB271:    xsi_set_current_line(165, ng0);

LAB274:    xsi_set_current_line(166, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 5128);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB273;

LAB277:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB278;

LAB279:    xsi_set_current_line(169, ng0);

LAB282:    xsi_set_current_line(170, ng0);
    t22 = ((char*)((ng1)));
    t28 = (t0 + 5288);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 1);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB281;

LAB287:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB288;

LAB289:    xsi_set_current_line(178, ng0);

LAB292:    xsi_set_current_line(179, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 5128);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    xsi_set_current_line(180, ng0);
    t2 = (t0 + 6336);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB293;
    goto LAB1;

LAB293:    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(182, ng0);
    t2 = (t0 + 6336);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB294;
    goto LAB1;

LAB294:    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB291;

LAB297:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB298;

LAB299:    xsi_set_current_line(186, ng0);

LAB302:    xsi_set_current_line(187, ng0);
    t22 = ((char*)((ng1)));
    t28 = (t0 + 5288);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 1);
    xsi_set_current_line(188, ng0);
    t2 = (t0 + 6336);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB303;
    goto LAB1;

LAB303:    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(190, ng0);
    t2 = (t0 + 6336);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB304;
    goto LAB1;

LAB304:    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB301;

LAB305:    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB43;

LAB309:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB310;

LAB311:    xsi_set_current_line(201, ng0);

LAB314:    xsi_set_current_line(202, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 5128);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    xsi_set_current_line(203, ng0);
    t2 = (t0 + 6336);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB315;
    goto LAB1;

LAB313:    goto LAB43;

LAB315:    xsi_set_current_line(204, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(205, ng0);
    t2 = (t0 + 6336);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB316;
    goto LAB1;

LAB316:    xsi_set_current_line(206, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(207, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB313;

LAB319:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB320;

LAB321:    xsi_set_current_line(209, ng0);

LAB324:    xsi_set_current_line(210, ng0);
    t22 = ((char*)((ng1)));
    t28 = (t0 + 5288);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 1);
    xsi_set_current_line(211, ng0);
    t2 = (t0 + 6336);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB325;
    goto LAB1;

LAB323:    goto LAB313;

LAB325:    xsi_set_current_line(212, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(213, ng0);
    t2 = (t0 + 6336);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB326;
    goto LAB1;

LAB326:    xsi_set_current_line(214, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(215, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB323;

LAB328:    xsi_set_current_line(220, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(221, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB323;

LAB332:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB333;

LAB334:    xsi_set_current_line(225, ng0);

LAB337:    xsi_set_current_line(226, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 5128);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    xsi_set_current_line(227, ng0);
    t2 = (t0 + 6336);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB338;
    goto LAB1;

LAB336:    goto LAB43;

LAB338:    xsi_set_current_line(228, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(229, ng0);
    t2 = (t0 + 6336);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB339;
    goto LAB1;

LAB339:    xsi_set_current_line(230, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(231, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB336;

LAB342:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB343;

LAB344:    xsi_set_current_line(233, ng0);

LAB347:    xsi_set_current_line(234, ng0);
    t22 = ((char*)((ng1)));
    t28 = (t0 + 5288);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 1);
    xsi_set_current_line(235, ng0);
    t2 = (t0 + 6336);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB348;
    goto LAB1;

LAB346:    goto LAB336;

LAB348:    xsi_set_current_line(236, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(237, ng0);
    t2 = (t0 + 6336);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB349;
    goto LAB1;

LAB349:    xsi_set_current_line(238, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(239, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB346;

LAB351:    xsi_set_current_line(244, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(245, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB346;

LAB355:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB356;

LAB357:    xsi_set_current_line(249, ng0);

LAB360:    xsi_set_current_line(250, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 5128);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    xsi_set_current_line(251, ng0);
    t2 = (t0 + 6336);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB361;
    goto LAB1;

LAB361:    xsi_set_current_line(252, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(253, ng0);
    t2 = (t0 + 6336);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB362;
    goto LAB1;

LAB362:    xsi_set_current_line(254, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(255, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB359;

LAB365:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB366;

LAB367:    xsi_set_current_line(257, ng0);

LAB370:    xsi_set_current_line(258, ng0);
    t22 = ((char*)((ng1)));
    t28 = (t0 + 5288);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 1);
    xsi_set_current_line(259, ng0);
    t2 = (t0 + 6336);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB371;
    goto LAB1;

LAB371:    xsi_set_current_line(260, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(261, ng0);
    t2 = (t0 + 6336);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB372;
    goto LAB1;

LAB372:    xsi_set_current_line(262, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(263, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB369;

}


extern void work_m_00000000002579137400_4020927633_init()
{
	static char *pe[] = {(void *)Always_56_0};
	xsi_register_didat("work_m_00000000002579137400_4020927633", "isim/vending_machine_isim_beh.exe.sim/work/m_00000000002579137400_4020927633.didat");
	xsi_register_executes(pe);
}

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
static const char *ng0 = "C:/Users/J/Documents/GitHub/CDA4203L-TeamLGSB/Lab 5/Lab5/controller.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {11U, 0U};
static unsigned int ng10[] = {6U, 0U};
static unsigned int ng11[] = {8U, 0U};
static unsigned int ng12[] = {7U, 0U};
static unsigned int ng13[] = {9U, 0U};
static unsigned int ng14[] = {10U, 0U};
static unsigned int ng15[] = {13U, 0U};



static void Always_47_0(char *t0)
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
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 6144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 6464);
    *((int *)t2) = 1;
    t3 = (t0 + 6176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 3544U);
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

LAB11:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3224U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;

LAB17:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB18;

LAB19:
LAB20:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(49, ng0);

LAB13:    xsi_set_current_line(50, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 5224);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 4);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4264);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB12;

LAB16:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(59, ng0);
    t21 = (t0 + 5224);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);

LAB21:    t29 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t28, 4, t29, 4);
    if (t30 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t28, 4, t2, 4);
    if (t30 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng6)));
    t30 = xsi_vlog_unsigned_case_compare(t28, 4, t2, 4);
    if (t30 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t28, 4, t2, 4);
    if (t30 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t28, 4, t2, 4);
    if (t30 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t28, 4, t2, 4);
    if (t30 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng10)));
    t30 = xsi_vlog_unsigned_case_compare(t28, 4, t2, 4);
    if (t30 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng12)));
    t30 = xsi_vlog_unsigned_case_compare(t28, 4, t2, 4);
    if (t30 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t28, 4, t2, 4);
    if (t30 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng13)));
    t30 = xsi_vlog_unsigned_case_compare(t28, 4, t2, 4);
    if (t30 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng14)));
    t30 = xsi_vlog_unsigned_case_compare(t28, 4, t2, 4);
    if (t30 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t28, 4, t2, 4);
    if (t30 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng15)));
    t30 = xsi_vlog_unsigned_case_compare(t28, 4, t2, 4);
    if (t30 == 1)
        goto LAB46;

LAB47:
LAB48:    goto LAB20;

LAB22:    xsi_set_current_line(60, ng0);

LAB49:    xsi_set_current_line(61, ng0);
    t31 = ((char*)((ng3)));
    t32 = (t0 + 5064);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB48;

LAB24:    xsi_set_current_line(64, ng0);

LAB50:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 3224U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t3);
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
        goto LAB54;

LAB51:    if (t18 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t6) = 1;

LAB54:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3224U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB62;

LAB59:    if (t18 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t6) = 1;

LAB62:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB63;

LAB64:
LAB65:
LAB57:    goto LAB48;

LAB26:    xsi_set_current_line(72, ng0);

LAB67:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 5224);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB48;

LAB28:    xsi_set_current_line(75, ng0);

LAB68:    xsi_set_current_line(76, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4264);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB48;

LAB30:    xsi_set_current_line(80, ng0);

LAB69:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 4264);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 5224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB48;

LAB32:    xsi_set_current_line(86, ng0);

LAB70:    xsi_set_current_line(87, ng0);
    t3 = (t0 + 3864U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t3);
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
        goto LAB74;

LAB71:    if (t18 != 0)
        goto LAB73;

LAB72:    *((unsigned int *)t6) = 1;

LAB74:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3864U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB82;

LAB79:    if (t18 != 0)
        goto LAB81;

LAB80:    *((unsigned int *)t6) = 1;

LAB82:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB83;

LAB84:
LAB85:
LAB77:    goto LAB48;

LAB34:    xsi_set_current_line(94, ng0);

LAB87:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 3704U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t3);
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
        goto LAB91;

LAB88:    if (t18 != 0)
        goto LAB90;

LAB89:    *((unsigned int *)t6) = 1;

LAB91:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB92;

LAB93:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3704U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB99;

LAB96:    if (t18 != 0)
        goto LAB98;

LAB97:    *((unsigned int *)t6) = 1;

LAB99:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB100;

LAB101:
LAB102:
LAB94:    goto LAB48;

LAB36:    xsi_set_current_line(102, ng0);

LAB104:    xsi_set_current_line(103, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4744);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 5224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB48;

LAB38:    xsi_set_current_line(107, ng0);

LAB105:    xsi_set_current_line(108, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4264);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 5224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB48;

LAB40:    xsi_set_current_line(112, ng0);

LAB106:    xsi_set_current_line(113, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 4264);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB48;

LAB42:    xsi_set_current_line(116, ng0);

LAB107:    xsi_set_current_line(117, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 5224);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB48;

LAB44:    xsi_set_current_line(119, ng0);

LAB108:    xsi_set_current_line(120, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4904);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB48;

LAB46:    xsi_set_current_line(123, ng0);

LAB109:    xsi_set_current_line(124, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 5064);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB48;

LAB53:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB54;

LAB55:    xsi_set_current_line(65, ng0);

LAB58:    xsi_set_current_line(66, ng0);
    t22 = ((char*)((ng5)));
    t29 = (t0 + 5224);
    xsi_vlogvar_assign_value(t29, t22, 0, 0, 4);
    goto LAB57;

LAB61:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB62;

LAB63:    xsi_set_current_line(68, ng0);

LAB66:    xsi_set_current_line(69, ng0);
    t21 = ((char*)((ng6)));
    t22 = (t0 + 5224);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 4);
    goto LAB65;

LAB73:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB74;

LAB75:    xsi_set_current_line(87, ng0);

LAB78:    xsi_set_current_line(88, ng0);
    t22 = ((char*)((ng9)));
    t29 = (t0 + 5224);
    xsi_vlogvar_assign_value(t29, t22, 0, 0, 4);
    goto LAB77;

LAB81:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB82;

LAB83:    xsi_set_current_line(90, ng0);

LAB86:    xsi_set_current_line(91, ng0);
    t21 = ((char*)((ng10)));
    t22 = (t0 + 5224);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 4);
    goto LAB85;

LAB90:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB91;

LAB92:    xsi_set_current_line(95, ng0);

LAB95:    xsi_set_current_line(96, ng0);
    t22 = ((char*)((ng11)));
    t29 = (t0 + 5224);
    xsi_vlogvar_assign_value(t29, t22, 0, 0, 4);
    goto LAB94;

LAB98:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB99;

LAB100:    xsi_set_current_line(98, ng0);

LAB103:    xsi_set_current_line(99, ng0);
    t21 = ((char*)((ng12)));
    t22 = (t0 + 5224);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 4);
    goto LAB102;

}


extern void work_m_00000000002718430533_3092946469_init()
{
	static char *pe[] = {(void *)Always_47_0};
	xsi_register_didat("work_m_00000000002718430533_3092946469", "isim/GCD_module_testbench_isim_beh.exe.sim/work/m_00000000002718430533_3092946469.didat");
	xsi_register_executes(pe);
}

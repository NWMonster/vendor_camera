/*============================================================================

  Copyright (c) 2013-2014 Qualcomm Technologies, Inc. All Rights Reserved.
  Qualcomm Technologies Proprietary and Confidential.

============================================================================*/
#ifndef __DEMOSAIC_BCC_REG_H__
#define __DEMOSAIC_BCC_REG_H__

#define ISP_DBCC_OFF 0x00000454
#define ISP_DBCC_LEN 4

/** ISP_BPCCfg_CmdType:
 *
 *  @enable: enable bit
 *  @cfg_reg: cfg reg
 **/
typedef union  ISP_BPCCfg_CmdType {
  struct {
    /* Demosaic Config */
    /* Reserved for dbpc enable  */
    uint32_t     /* reserved */                   : 1;
    /* Reserved for dbcc enable  */
    uint32_t     enable                           : 1;
    /* Reserved for abcc enable */
    uint32_t     /* reserved */                   : 1;
    /* Reserved for abf enable  */
    uint32_t     /* reserved */                   : 1;
    /* Reserved for cosited rgb enable */
    uint32_t     /* reserved */                   : 1;
    uint32_t     /* reserved */                   : 3;
    /* reserved for abcc lut bank selection   */
    uint32_t      /* reserved */                  : 1;
    uint32_t     /* reserved */                   : 7;
    /* reserved for  pipe flush count   */
    uint32_t     /* reserved */                   : 13;
    uint32_t     /* reserved */                   : 1;
    /* reserved for pipe flush ovd */
    uint32_t     /* reserved */                   : 1;
    /* reserved for flush halt ovd */
    uint32_t     /* reserved */                   : 1;
  }__attribute__((packed, aligned(4)));
  uint32_t cfg;
}__attribute__((packed, aligned(4))) ISP_BPCCfg_CmdType;

/** ISP_DemosaicDBPC_CmdType:
 *
 *  @fminThreshold: fmin threshold
 *  @fmaxThreshold: fmax threshold
 *  @rOffsetLo: r offset LO
 *  @rOffsetHi: r offset Hi
 *  @grOffsetLo: gr offset Lo
 *  @gbOffsetLo: gb offset Lo
 *  @gbOffsetHi: gc offset Hi
 *  @grOffsetHi: gr offset Hi
 *  @bOffsetLo: b offset Lo
 *  @bOffsetHi: b offset Hi
 **/
typedef struct ISP_DemosaicDBCC_CmdType {
  /* DBCC_CFG */
  uint32_t     fminThreshold                    : 8;
  uint32_t     fmaxThreshold                    : 8;
  uint32_t     gain                             : 16;

  /* DBCC_OFFSET_CFG_0 */
  uint32_t     rOffsetLo                        : 10;
  uint32_t     rOffsetHi                        : 10;
  uint32_t     grOffsetLo                       : 10;
  uint32_t     /* reserved */                   :  2;

  /* DBCCC_OFFSET_CFG_1 */
  uint32_t     gbOffsetLo                       :10;
  uint32_t     gbOffsetHi                       :10;
  uint32_t     grOffsetHi                       :10;
  uint32_t     /* reserved */                   : 2;

  /* DBCC_OFFSET_CFG_2 */
  uint32_t     bOffsetLo                        :10;
  uint32_t     bOffsetHi                        :10;
  uint32_t     /* reserved */                   :12;
}__attribute__((packed, aligned(4))) ISP_DemosaicDBCC_CmdType;

#endif /* __DEMOSAIC_BCC_REG_H__ */

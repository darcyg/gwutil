#ifndef __ALGO_H_
#define __ALGO_H_


#ifdef __cplusplus 
extern "C" {
#endif

/* 3des ecb */
/* algo_3des_ecb_init
 * 
 * 3des ecb ���ܳ�ʼ��
 * 
 * @param key[in] �����ܳ�, 32�ֽڻ���48�ֽڳ���, ����������
 * "111111111111111111111111", 24��1,����Ӧ����д
 * "31313131313131313131313131313131313131313131313131313131", ����1��hex string��ʽ
 * 
 * @return none
 */
void algo_3des_ecb_init(char *key);


/* algo_3des_ecb_encrypt
 * 
 * 3des ecb ����
 * 
 * @param str[in] ��Ҫ���ܵ��ַ���, ԭʼ�ַ���
 * @param enstr[out] ����������ַ���,����base64 ����
 *
 * @return ���ؼ��ܺ��ַ�������
 */
int algo_3des_ecb_encrypt(char *str, char *enstr);

/* algo_3des_ecb_decrypt
 * 
 * 3des ecb ����
 * 
 * @param str[in] ��Ҫ���ܵ��ַ���, ����base64��
 * @param destr[out] ���ܺ���ַ���,
 *
 * @return ���ء������ַ������� 
 */
int algo_3des_ecb_decrypt(char *str, char *destr);



/* algo_3des_ecb_free
 * 
 * 3des ecb �ͷ�
 * 
 * @param none
 *
 * @return none
 */
void algo_3des_ecb_free();
  
#ifdef __cplusplus
}
#endif

#endif



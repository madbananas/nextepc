/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/r14.4.0/36413-e40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_S1AP_SONInformationReport_H_
#define	_S1AP_SONInformationReport_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_SONInformationReport_PR {
	SONInformationReport_PR_NOTHING,	/* No components present */
	SONInformationReport_PR_rLFReportInformation
	/* Extensions may appear below */
	
} S1AP_SONInformationReport_PR;

/* Forward declarations */
struct S1AP_RLFReportInformation;

/* S1AP_SONInformationReport */
typedef struct S1AP_SONInformationReport {
	S1AP_SONInformationReport_PR present;
	union S1AP_SONInformationReport_u {
		struct S1AP_RLFReportInformation	*rLFReportInformation;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_SONInformationReport_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_SONInformationReport;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_SONInformationReport_H_ */
#include <asn_internal.h>

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "sms_management_subscription_data_1.h"

OpenAPI_sms_management_subscription_data_1_t *OpenAPI_sms_management_subscription_data_1_create(
    char *supported_features,
    bool is_mt_sms_subscribed,
    int mt_sms_subscribed,
    bool is_mt_sms_barring_all,
    int mt_sms_barring_all,
    bool is_mt_sms_barring_roaming,
    int mt_sms_barring_roaming,
    bool is_mo_sms_subscribed,
    int mo_sms_subscribed,
    bool is_mo_sms_barring_all,
    int mo_sms_barring_all,
    bool is_mo_sms_barring_roaming,
    int mo_sms_barring_roaming,
    OpenAPI_list_t *shared_sms_mng_data_ids,
    OpenAPI_trace_data_t *trace_data
)
{
    OpenAPI_sms_management_subscription_data_1_t *sms_management_subscription_data_1_local_var = OpenAPI_malloc(sizeof(OpenAPI_sms_management_subscription_data_1_t));
    if (!sms_management_subscription_data_1_local_var) {
        return NULL;
    }
    sms_management_subscription_data_1_local_var->supported_features = supported_features;
    sms_management_subscription_data_1_local_var->is_mt_sms_subscribed = is_mt_sms_subscribed;
    sms_management_subscription_data_1_local_var->mt_sms_subscribed = mt_sms_subscribed;
    sms_management_subscription_data_1_local_var->is_mt_sms_barring_all = is_mt_sms_barring_all;
    sms_management_subscription_data_1_local_var->mt_sms_barring_all = mt_sms_barring_all;
    sms_management_subscription_data_1_local_var->is_mt_sms_barring_roaming = is_mt_sms_barring_roaming;
    sms_management_subscription_data_1_local_var->mt_sms_barring_roaming = mt_sms_barring_roaming;
    sms_management_subscription_data_1_local_var->is_mo_sms_subscribed = is_mo_sms_subscribed;
    sms_management_subscription_data_1_local_var->mo_sms_subscribed = mo_sms_subscribed;
    sms_management_subscription_data_1_local_var->is_mo_sms_barring_all = is_mo_sms_barring_all;
    sms_management_subscription_data_1_local_var->mo_sms_barring_all = mo_sms_barring_all;
    sms_management_subscription_data_1_local_var->is_mo_sms_barring_roaming = is_mo_sms_barring_roaming;
    sms_management_subscription_data_1_local_var->mo_sms_barring_roaming = mo_sms_barring_roaming;
    sms_management_subscription_data_1_local_var->shared_sms_mng_data_ids = shared_sms_mng_data_ids;
    sms_management_subscription_data_1_local_var->trace_data = trace_data;

    return sms_management_subscription_data_1_local_var;
}

void OpenAPI_sms_management_subscription_data_1_free(OpenAPI_sms_management_subscription_data_1_t *sms_management_subscription_data_1)
{
    if (NULL == sms_management_subscription_data_1) {
        return;
    }
    OpenAPI_lnode_t *node;
    ogs_free(sms_management_subscription_data_1->supported_features);
    OpenAPI_list_for_each(sms_management_subscription_data_1->shared_sms_mng_data_ids, node) {
        ogs_free(node->data);
    }
    OpenAPI_list_free(sms_management_subscription_data_1->shared_sms_mng_data_ids);
    OpenAPI_trace_data_free(sms_management_subscription_data_1->trace_data);
    ogs_free(sms_management_subscription_data_1);
}

cJSON *OpenAPI_sms_management_subscription_data_1_convertToJSON(OpenAPI_sms_management_subscription_data_1_t *sms_management_subscription_data_1)
{
    cJSON *item = NULL;

    if (sms_management_subscription_data_1 == NULL) {
        ogs_error("OpenAPI_sms_management_subscription_data_1_convertToJSON() failed [SmsManagementSubscriptionData_1]");
        return NULL;
    }

    item = cJSON_CreateObject();
    if (sms_management_subscription_data_1->supported_features) {
    if (cJSON_AddStringToObject(item, "supportedFeatures", sms_management_subscription_data_1->supported_features) == NULL) {
        ogs_error("OpenAPI_sms_management_subscription_data_1_convertToJSON() failed [supported_features]");
        goto end;
    }
    }

    if (sms_management_subscription_data_1->is_mt_sms_subscribed) {
    if (cJSON_AddBoolToObject(item, "mtSmsSubscribed", sms_management_subscription_data_1->mt_sms_subscribed) == NULL) {
        ogs_error("OpenAPI_sms_management_subscription_data_1_convertToJSON() failed [mt_sms_subscribed]");
        goto end;
    }
    }

    if (sms_management_subscription_data_1->is_mt_sms_barring_all) {
    if (cJSON_AddBoolToObject(item, "mtSmsBarringAll", sms_management_subscription_data_1->mt_sms_barring_all) == NULL) {
        ogs_error("OpenAPI_sms_management_subscription_data_1_convertToJSON() failed [mt_sms_barring_all]");
        goto end;
    }
    }

    if (sms_management_subscription_data_1->is_mt_sms_barring_roaming) {
    if (cJSON_AddBoolToObject(item, "mtSmsBarringRoaming", sms_management_subscription_data_1->mt_sms_barring_roaming) == NULL) {
        ogs_error("OpenAPI_sms_management_subscription_data_1_convertToJSON() failed [mt_sms_barring_roaming]");
        goto end;
    }
    }

    if (sms_management_subscription_data_1->is_mo_sms_subscribed) {
    if (cJSON_AddBoolToObject(item, "moSmsSubscribed", sms_management_subscription_data_1->mo_sms_subscribed) == NULL) {
        ogs_error("OpenAPI_sms_management_subscription_data_1_convertToJSON() failed [mo_sms_subscribed]");
        goto end;
    }
    }

    if (sms_management_subscription_data_1->is_mo_sms_barring_all) {
    if (cJSON_AddBoolToObject(item, "moSmsBarringAll", sms_management_subscription_data_1->mo_sms_barring_all) == NULL) {
        ogs_error("OpenAPI_sms_management_subscription_data_1_convertToJSON() failed [mo_sms_barring_all]");
        goto end;
    }
    }

    if (sms_management_subscription_data_1->is_mo_sms_barring_roaming) {
    if (cJSON_AddBoolToObject(item, "moSmsBarringRoaming", sms_management_subscription_data_1->mo_sms_barring_roaming) == NULL) {
        ogs_error("OpenAPI_sms_management_subscription_data_1_convertToJSON() failed [mo_sms_barring_roaming]");
        goto end;
    }
    }

    if (sms_management_subscription_data_1->shared_sms_mng_data_ids) {
    cJSON *shared_sms_mng_data_ids = cJSON_AddArrayToObject(item, "sharedSmsMngDataIds");
    if (shared_sms_mng_data_ids == NULL) {
        ogs_error("OpenAPI_sms_management_subscription_data_1_convertToJSON() failed [shared_sms_mng_data_ids]");
        goto end;
    }

    OpenAPI_lnode_t *shared_sms_mng_data_ids_node;
    OpenAPI_list_for_each(sms_management_subscription_data_1->shared_sms_mng_data_ids, shared_sms_mng_data_ids_node)  {
    if (cJSON_AddStringToObject(shared_sms_mng_data_ids, "", (char*)shared_sms_mng_data_ids_node->data) == NULL) {
        ogs_error("OpenAPI_sms_management_subscription_data_1_convertToJSON() failed [shared_sms_mng_data_ids]");
        goto end;
    }
                    }
    }

    if (sms_management_subscription_data_1->trace_data) {
    cJSON *trace_data_local_JSON = OpenAPI_trace_data_convertToJSON(sms_management_subscription_data_1->trace_data);
    if (trace_data_local_JSON == NULL) {
        ogs_error("OpenAPI_sms_management_subscription_data_1_convertToJSON() failed [trace_data]");
        goto end;
    }
    cJSON_AddItemToObject(item, "traceData", trace_data_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_sms_management_subscription_data_1_convertToJSON() failed [trace_data]");
        goto end;
    }
    }

end:
    return item;
}

OpenAPI_sms_management_subscription_data_1_t *OpenAPI_sms_management_subscription_data_1_parseFromJSON(cJSON *sms_management_subscription_data_1JSON)
{
    OpenAPI_sms_management_subscription_data_1_t *sms_management_subscription_data_1_local_var = NULL;
    cJSON *supported_features = cJSON_GetObjectItemCaseSensitive(sms_management_subscription_data_1JSON, "supportedFeatures");

    if (supported_features) { 
    if (!cJSON_IsString(supported_features)) {
        ogs_error("OpenAPI_sms_management_subscription_data_1_parseFromJSON() failed [supported_features]");
        goto end;
    }
    }

    cJSON *mt_sms_subscribed = cJSON_GetObjectItemCaseSensitive(sms_management_subscription_data_1JSON, "mtSmsSubscribed");

    if (mt_sms_subscribed) { 
    if (!cJSON_IsBool(mt_sms_subscribed)) {
        ogs_error("OpenAPI_sms_management_subscription_data_1_parseFromJSON() failed [mt_sms_subscribed]");
        goto end;
    }
    }

    cJSON *mt_sms_barring_all = cJSON_GetObjectItemCaseSensitive(sms_management_subscription_data_1JSON, "mtSmsBarringAll");

    if (mt_sms_barring_all) { 
    if (!cJSON_IsBool(mt_sms_barring_all)) {
        ogs_error("OpenAPI_sms_management_subscription_data_1_parseFromJSON() failed [mt_sms_barring_all]");
        goto end;
    }
    }

    cJSON *mt_sms_barring_roaming = cJSON_GetObjectItemCaseSensitive(sms_management_subscription_data_1JSON, "mtSmsBarringRoaming");

    if (mt_sms_barring_roaming) { 
    if (!cJSON_IsBool(mt_sms_barring_roaming)) {
        ogs_error("OpenAPI_sms_management_subscription_data_1_parseFromJSON() failed [mt_sms_barring_roaming]");
        goto end;
    }
    }

    cJSON *mo_sms_subscribed = cJSON_GetObjectItemCaseSensitive(sms_management_subscription_data_1JSON, "moSmsSubscribed");

    if (mo_sms_subscribed) { 
    if (!cJSON_IsBool(mo_sms_subscribed)) {
        ogs_error("OpenAPI_sms_management_subscription_data_1_parseFromJSON() failed [mo_sms_subscribed]");
        goto end;
    }
    }

    cJSON *mo_sms_barring_all = cJSON_GetObjectItemCaseSensitive(sms_management_subscription_data_1JSON, "moSmsBarringAll");

    if (mo_sms_barring_all) { 
    if (!cJSON_IsBool(mo_sms_barring_all)) {
        ogs_error("OpenAPI_sms_management_subscription_data_1_parseFromJSON() failed [mo_sms_barring_all]");
        goto end;
    }
    }

    cJSON *mo_sms_barring_roaming = cJSON_GetObjectItemCaseSensitive(sms_management_subscription_data_1JSON, "moSmsBarringRoaming");

    if (mo_sms_barring_roaming) { 
    if (!cJSON_IsBool(mo_sms_barring_roaming)) {
        ogs_error("OpenAPI_sms_management_subscription_data_1_parseFromJSON() failed [mo_sms_barring_roaming]");
        goto end;
    }
    }

    cJSON *shared_sms_mng_data_ids = cJSON_GetObjectItemCaseSensitive(sms_management_subscription_data_1JSON, "sharedSmsMngDataIds");

    OpenAPI_list_t *shared_sms_mng_data_idsList;
    if (shared_sms_mng_data_ids) { 
    cJSON *shared_sms_mng_data_ids_local;
    if (!cJSON_IsArray(shared_sms_mng_data_ids)) {
        ogs_error("OpenAPI_sms_management_subscription_data_1_parseFromJSON() failed [shared_sms_mng_data_ids]");
        goto end;
    }
    shared_sms_mng_data_idsList = OpenAPI_list_create();

    cJSON_ArrayForEach(shared_sms_mng_data_ids_local, shared_sms_mng_data_ids) {
    if (!cJSON_IsString(shared_sms_mng_data_ids_local)) {
        ogs_error("OpenAPI_sms_management_subscription_data_1_parseFromJSON() failed [shared_sms_mng_data_ids]");
        goto end;
    }
    OpenAPI_list_add(shared_sms_mng_data_idsList , ogs_strdup_or_assert(shared_sms_mng_data_ids_local->valuestring));
                    }
    }

    cJSON *trace_data = cJSON_GetObjectItemCaseSensitive(sms_management_subscription_data_1JSON, "traceData");

    OpenAPI_trace_data_t *trace_data_local_nonprim = NULL;
    if (trace_data) { 
    trace_data_local_nonprim = OpenAPI_trace_data_parseFromJSON(trace_data);
    }

    sms_management_subscription_data_1_local_var = OpenAPI_sms_management_subscription_data_1_create (
        supported_features ? ogs_strdup_or_assert(supported_features->valuestring) : NULL,
        mt_sms_subscribed ? true : false,
        mt_sms_subscribed ? mt_sms_subscribed->valueint : 0,
        mt_sms_barring_all ? true : false,
        mt_sms_barring_all ? mt_sms_barring_all->valueint : 0,
        mt_sms_barring_roaming ? true : false,
        mt_sms_barring_roaming ? mt_sms_barring_roaming->valueint : 0,
        mo_sms_subscribed ? true : false,
        mo_sms_subscribed ? mo_sms_subscribed->valueint : 0,
        mo_sms_barring_all ? true : false,
        mo_sms_barring_all ? mo_sms_barring_all->valueint : 0,
        mo_sms_barring_roaming ? true : false,
        mo_sms_barring_roaming ? mo_sms_barring_roaming->valueint : 0,
        shared_sms_mng_data_ids ? shared_sms_mng_data_idsList : NULL,
        trace_data ? trace_data_local_nonprim : NULL
    );

    return sms_management_subscription_data_1_local_var;
end:
    return NULL;
}

OpenAPI_sms_management_subscription_data_1_t *OpenAPI_sms_management_subscription_data_1_copy(OpenAPI_sms_management_subscription_data_1_t *dst, OpenAPI_sms_management_subscription_data_1_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_sms_management_subscription_data_1_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_sms_management_subscription_data_1_convertToJSON() failed");
        return NULL;
    }

    content = cJSON_Print(item);
    cJSON_Delete(item);

    if (!content) {
        ogs_error("cJSON_Print() failed");
        return NULL;
    }

    item = cJSON_Parse(content);
    ogs_free(content);
    if (!item) {
        ogs_error("cJSON_Parse() failed");
        return NULL;
    }

    OpenAPI_sms_management_subscription_data_1_free(dst);
    dst = OpenAPI_sms_management_subscription_data_1_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}


/**
 * TikHub.io - Your Ultimate Social Media Data & API Marketplace
 * High-performance asynchronous Douyin(抖音) TikTok Xiaohongshu(小红书) Kuaishou(快手) Weibo(微博) Instagram YouTube(油管) Twitter(X) Captcha Solver(验证码解决器) Temp Mail(临时邮箱) API(接口).
 *
 * The version of the OpenAPI document: 1.0.0
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ModeEnum.h
 *
 * ModeEnum
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ModeEnum_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ModeEnum_H_


#include "../ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  ModeEnum
    : public ModelBase
{
public:
    ModeEnum();
    virtual ~ModeEnum();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eModeEnum
    {
        ModeEnum_ENCRYPT,
        ModeEnum_DECRYPT,
    };

    eModeEnum getValue() const;
    void setValue(eModeEnum const value);

    protected:
        eModeEnum m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ModeEnum_H_ */

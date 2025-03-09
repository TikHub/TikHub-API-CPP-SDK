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
 * BodyTencentCaptchaApiV1CaptchaTencentCaptchaPost.h
 *
 * Body_tencent_captcha_api_v1_captcha_tencent_captcha_post
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BodyTencentCaptchaApiV1CaptchaTencentCaptchaPost_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BodyTencentCaptchaApiV1CaptchaTencentCaptchaPost_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "Object.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Body_tencent_captcha_api_v1_captcha_tencent_captcha_post
/// </summary>
class  BodyTencentCaptchaApiV1CaptchaTencentCaptchaPost
    : public ModelBase
{
public:
    BodyTencentCaptchaApiV1CaptchaTencentCaptchaPost();
    virtual ~BodyTencentCaptchaApiV1CaptchaTencentCaptchaPost();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BodyTencentCaptchaApiV1CaptchaTencentCaptchaPost members

    /// <summary>
    /// App Id，App ID
    /// </summary>
    utility::string_t getAppId() const;
    bool appIdIsSet() const;
    void unsetApp_id();

    void setAppId(const utility::string_t& value);

    /// <summary>
    /// Url，URL
    /// </summary>
    utility::string_t getUrl() const;
    bool urlIsSet() const;
    void unsetUrl();

    void setUrl(const utility::string_t& value);

    /// <summary>
    /// Proxy，Proxy
    /// </summary>
    std::shared_ptr<Object> getProxy() const;
    bool proxyIsSet() const;
    void unsetProxy();

    void setProxy(const std::shared_ptr<Object>& value);


protected:
    utility::string_t m_App_id;
    bool m_App_idIsSet;
    utility::string_t m_Url;
    bool m_UrlIsSet;
    std::shared_ptr<Object> m_Proxy;
    bool m_ProxyIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BodyTencentCaptchaApiV1CaptchaTencentCaptchaPost_H_ */

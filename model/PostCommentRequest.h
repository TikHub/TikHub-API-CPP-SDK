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
 * PostCommentRequest.h
 *
 * PostCommentRequest
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_PostCommentRequest_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_PostCommentRequest_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// PostCommentRequest
/// </summary>
class  PostCommentRequest
    : public ModelBase
{
public:
    PostCommentRequest();
    virtual ~PostCommentRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PostCommentRequest members

    /// <summary>
    /// AKA Video ID，Video ID, which can be obtained from the sharing link, for example: https://www.tiktok.com/@username/video/7419966340443819295
    /// </summary>
    utility::string_t getAwemeId() const;
    bool awemeIdIsSet() const;
    void unsetAweme_id();

    void setAwemeId(const utility::string_t& value);

    /// <summary>
    /// Comment Content，Comment content, TikTok comment content needs to comply with the specifications, do not contain illegal keywords, otherwise, even if the request is successful, it will be judged as spam comments by the system and will not be displayed.
    /// </summary>
    utility::string_t getText() const;
    bool textIsSet() const;
    void unsetText();

    void setText(const utility::string_t& value);

    /// <summary>
    /// User Cookie，User Cookie, you can log in to your TikTok account in the browser and then copy the Cookie information, please use URL-encoded Cookie string when submitting.
    /// </summary>
    utility::string_t getCookie() const;
    bool cookieIsSet() const;
    void unsetCookie();

    void setCookie(const utility::string_t& value);

    /// <summary>
    /// Device ID，Device id, optional, if not filled in, it will be automatically generated, if you need to customize the device id, please use the device information interface to get the device id.
    /// </summary>
    utility::string_t getDeviceId() const;
    bool deviceIdIsSet() const;
    void unsetDevice_id();

    void setDeviceId(const utility::string_t& value);

    /// <summary>
    /// Device Install ID，Device install id, optional, if not filled in, it will be automatically generated, if you need to customize the device iid, please use the device information interface to get the device iid.
    /// </summary>
    utility::string_t getIid() const;
    bool iidIsSet() const;
    void unsetIid();

    void setIid(const utility::string_t& value);

    /// <summary>
    /// Proxy IP，Proxy IP, optional, if not filled in, it will be automatically generated, if you need to customize the proxy IP, please use the proxy IP interface to get the proxy IP.
    /// </summary>
    utility::string_t getProxy() const;
    bool proxyIsSet() const;
    void unsetProxy();

    void setProxy(const utility::string_t& value);


protected:
    utility::string_t m_Aweme_id;
    bool m_Aweme_idIsSet;
    utility::string_t m_Text;
    bool m_TextIsSet;
    utility::string_t m_Cookie;
    bool m_CookieIsSet;
    utility::string_t m_Device_id;
    bool m_Device_idIsSet;
    utility::string_t m_Iid;
    bool m_IidIsSet;
    utility::string_t m_Proxy;
    bool m_ProxyIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_PostCommentRequest_H_ */

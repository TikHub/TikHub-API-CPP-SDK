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
 * TikTokAppLoginEncryptDecryptRequest.h
 *
 * TikTok_APP_Login_Encrypt_Decrypt_Request
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_TikTokAppLoginEncryptDecryptRequest_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_TikTokAppLoginEncryptDecryptRequest_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "ModeEnum.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// TikTok_APP_Login_Encrypt_Decrypt_Request
/// </summary>
class  TikTokAppLoginEncryptDecryptRequest
    : public ModelBase
{
public:
    TikTokAppLoginEncryptDecryptRequest();
    virtual ~TikTokAppLoginEncryptDecryptRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// TikTokAppLoginEncryptDecryptRequest members

    /// <summary>
    /// Username，Plaintext or encrypted username
    /// </summary>
    utility::string_t getUsername() const;
    bool usernameIsSet() const;
    void unsetUsername();

    void setUsername(const utility::string_t& value);

    /// <summary>
    /// Password，Plaintext or encrypted password
    /// </summary>
    utility::string_t getPassword() const;
    bool passwordIsSet() const;
    void unsetPassword();

    void setPassword(const utility::string_t& value);

    /// <summary>
    /// Encrypt or decrypt the input string
    /// </summary>
    std::shared_ptr<ModeEnum> getMode() const;
    bool modeIsSet() const;
    void unsetMode();

    void setMode(const std::shared_ptr<ModeEnum>& value);


protected:
    utility::string_t m_Username;
    bool m_UsernameIsSet;
    utility::string_t m_Password;
    bool m_PasswordIsSet;
    std::shared_ptr<ModeEnum> m_Mode;
    bool m_ModeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_TikTokAppLoginEncryptDecryptRequest_H_ */

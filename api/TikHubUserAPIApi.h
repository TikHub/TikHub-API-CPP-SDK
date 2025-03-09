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
 * TikHubUserAPIApi.h
 *
 * 
 */

#ifndef IO_TIKHUB_CLIENT_API_TikHubUserAPIApi_H_
#define IO_TIKHUB_CLIENT_API_TikHubUserAPIApi_H_


#include "../ApiClient.h"

#include "HttpValidationError.h"
#include "ResponseModel.h"
#include "UserInfoResponseModel.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace io {
namespace tikhub {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  TikHubUserAPIApi 
{
public:

    explicit TikHubUserAPIApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~TikHubUserAPIApi();

    /// <summary>
    /// 计算价格/Calculate price
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 根据用户输入的每日请求次数以及端点信息计算最终价格。 ### 参数: - endpoint: 请求的端点，用于查询端点的原始请求单价 - request_per_day: 每日请求次数，用于计算价格，将自动根据阶梯式计费的折扣百分比计算最终价格 ### 计算公式: - 总成本 &#x3D; ∑ (阶梯内请求次数 * 阶梯折后单价) - 其中，阶梯折后单价 &#x3D; 基础价格 * (1 - 折扣) ### 详细计算步骤: 1. **初始化总成本**：    总成本&#x3D;0 2. **遍历每个阶梯**：    * 对于每个阶梯，计算该阶梯内的请求次数。    * 计算该阶梯内的折后单价。    * 计算该阶梯内的总费用，并累加到总成本中。    * 更新剩余的请求次数。 ### 数学表示: &gt; 设有 𝑛 个阶梯，每个阶梯的参数为： * min_rpd𝑖: 第 𝑖 个阶梯的最小请求次数 * max_rpd𝑖: 第 𝑖 个阶梯的最大请求次数 * discount𝑖: 第 𝑖 个阶梯的折扣（百分比形式） * base_price：基础价格 * request_per_day：每日请求次数 &gt; 那么，总成本的计算公式如下： - 总成本 &#x3D; Σ𝑖&#x3D;1𝑛（阶梯𝑖中的请求数量 * 阶梯𝑖中的折扣单价） - 其中，阶梯折扣单价 𝑖 &#x3D; base_price * (1 - 折扣𝑖/100) - 该阶梯中的请求数 𝑖 &#x3D; min(request_per_day - 累计付费请求数, max_rpd𝑖 - min_rpd𝑖) ### 示例 &gt; 假设有以下定价阶梯： * 第 1 阶梯：0 ≤ rpd &lt; 1000，折扣 0% * 第 2 阶梯：1000 ≤ rpd &lt; 5000，折扣 10% * 第 3 阶梯：5000 ≤ rpd &lt; 10000，折扣 20% * 第 4 阶梯：10000 ≤ rpd &lt; 20000，折扣 30% * 第 5 阶梯：20000 ≤ rpd &lt; 30000，折扣 40% * 第 6 阶梯：30000 ≤ rpd，折扣 50% &gt; 假设基础价格为 0.001 USD，每日请求次数为 12000，则计算过程如下： 1. **第 1 阶梯**（0 ≤ rpd &lt; 1000）：    * 阶梯内请求次数&#x3D;1000−0&#x3D;1000    * 阶梯折后单价&#x3D;0.001×(1−0/100)&#x3D;0.001    * 总成本&#x3D;1000×0.001&#x3D;1 2. **第 2 阶梯**（1000 ≤ rpd &lt; 5000）：    * 阶梯内请求次数&#x3D;5000−1000&#x3D;4000    * 阶梯折后单价&#x3D;0.001×(1−10/100)&#x3D;0.0009    * 总成本&#x3D;4000×0.0009&#x3D;3.6 3. **第 3 阶梯**（5000 ≤ rpd &lt; 10000）：    * 阶梯内请求次数&#x3D;10000−5000&#x3D;5000    * 阶梯折后单价&#x3D;0.001×(1−20/100)&#x3D;0.0008    * 总成本&#x3D;5000×0.0008&#x3D;4 4. **第 4 阶梯**（10000 ≤ rpd &lt; 20000）：    * 阶梯内请求次数&#x3D;12000−10000&#x3D;2000    * 阶梯折后单价&#x3D;0.001×(1−30/100)&#x3D;0.0007    * 总成本&#x3D;2000×0.0007&#x3D;1.4 5. **累加总成本**：    * 总成本&#x3D;1+3.6+4+1.4&#x3D;10 ### 返回: - 端点uri - 每日请求次数 - 端点原始请求单价 - 总价格 - 货币单位 - 阶梯式计费的折扣百分比信息  # [English] ### Purpose: - Calculate the final price based on the user&#39;s input of the number of daily requests and endpoint information. - Price calculation formula: Price &#x3D; Number of daily requests * (Original request unit price of the endpoint * (1 - discount percentage of tiered billing)) ### Parameters: - endpoint: Requested endpoint, used to query the original request unit price of the endpoint - request_per_day: Number of daily requests, used to calculate the price, the final price will be calculated automatically based on the discount percentage of the tiered billing ### Calculation formula: - Total cost &#x3D; ∑ (Number of requests in the tier * Discounted unit price in the tier) - Where, Discounted unit price in the tier &#x3D; Base price * (1 - Discount) ### Detailed calculation steps: 1. **Initialize the total cost**:      Total cost &#x3D; 0 2. **Traverse each tier**:         * For each tier, calculate the number of requests in the tier.         * Calculate the discounted unit price in the tier.         * Calculate the total cost in the tier and add it to the total cost.         * Update the remaining number of requests. ### Mathematical representation: Suppose there are 𝑛 tiers, and the parameters of each tier are: * min_rpd𝑖: The minimum number of requests in the 𝑖-th tier * max_rpd𝑖: The maximum number of requests in the 𝑖-th tier * discount𝑖: The discount of the 𝑖-th tier (in percentage form) * base_price: Base price * request_per_day: Number of daily requests &gt; Then, the formula for calculating the total cost is as follows: - Total cost &#x3D; ∑𝑖&#x3D;1𝑛(Number of requests in the tier 𝑖 * Discounted unit price in the tier 𝑖) - Where, Discounted unit price in the tier 𝑖 &#x3D; base_price * (1 - discount𝑖/100) - Number of requests in the tier 𝑖 &#x3D; min(request_per_day - accumulated number of paid requests, max_rpd𝑖 - min_rpd𝑖) ### Example Suppose there are the following pricing tiers: * Tier 1: 0 ≤ rpd &lt; 1000, discount 0% * Tier 2: 1000 ≤ rpd &lt; 5000, discount 10% * Tier 3: 5000 ≤ rpd &lt; 10000, discount 20% * Tier 4: 10000 ≤ rpd &lt; 20000, discount 30% * Tier 5: 20000 ≤ rpd &lt; 30000, discount 40% * Tier 6: 30000 ≤ rpd, discount 50% &gt; Suppose the base price is 0.001 USD and the number of daily requests is 12000, the calculation process is as follows: 1. **Tier 1** (0 ≤ rpd &lt; 1000):      - Number of requests in the tier 1 &#x3D; 1000 - 0 &#x3D; 1000      - Discounted unit price in the tier 1 &#x3D; 0.001 * (1 - 0/100) &#x3D; 0.001      - Total cost 1 &#x3D; 1000 * 0.001 &#x3D; 1 2. **Tier 2** (1000 ≤ rpd &lt; 5000):     - Number of requests in the tier 2 &#x3D; 5000 - 1000 &#x3D; 4000     - Discounted unit price in the tier 2 &#x3D; 0.001 * (1 - 10/100) &#x3D; 0.0009     - Total cost 2 &#x3D; 4000 * 0.0009 &#x3D; 3.6 3. **Tier 3** (5000 ≤ rpd &lt; 10000):     - Number of requests in the tier 3 &#x3D; 10000 - 5000 &#x3D; 5000     - Discounted unit price in the tier 3 &#x3D; 0.001 * (1 - 20/100) &#x3D; 0.0008     - Total cost 3 &#x3D; 5000 * 0.0008 &#x3D; 4 4. **Tier 4** (10000 ≤ rpd &lt; 20000):     - Number of requests in the tier 4 &#x3D; 12000 - 10000 &#x3D; 2000     - Discounted unit price in the tier 4 &#x3D; 0.001 * (1 - 30/100) &#x3D; 0.0007     - Total cost 4 &#x3D; 2000 * 0.0007 &#x3D; 1.4 5. **Accumulated total cost**:     - Total cost &#x3D; 1 + 3.6 + 4 + 1.4 &#x3D; 10 ### Return: - Endpoint uri - Number of daily requests - Original request unit price of the endpoint - Total price - Currency unit - Discount percentage information of tiered billing
    /// </remarks>
    /// <param name="endpoint">请求的端点/Requested endpoint</param>
    /// <param name="requestPerDay">每日请求次数/Request per day (optional, default to 0)</param>
    pplx::task<std::shared_ptr<ResponseModel>> calculatePriceApiV1TikhubUserCalculatePriceGet(
        utility::string_t endpoint,
        boost::optional<int32_t> requestPerDay
    ) const;
    /// <summary>
    /// 计算价格/Calculate price
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 根据用户输入的每日请求次数以及端点信息计算最终价格。 ### 参数: - endpoint: 请求的端点，用于查询端点的原始请求单价 - request_per_day: 每日请求次数，用于计算价格，将自动根据阶梯式计费的折扣百分比计算最终价格 ### 计算公式: - 总成本 &#x3D; ∑ (阶梯内请求次数 * 阶梯折后单价) - 其中，阶梯折后单价 &#x3D; 基础价格 * (1 - 折扣) ### 详细计算步骤: 1. **初始化总成本**：    总成本&#x3D;0 2. **遍历每个阶梯**：    * 对于每个阶梯，计算该阶梯内的请求次数。    * 计算该阶梯内的折后单价。    * 计算该阶梯内的总费用，并累加到总成本中。    * 更新剩余的请求次数。 ### 数学表示: &gt; 设有 𝑛 个阶梯，每个阶梯的参数为： * min_rpd𝑖: 第 𝑖 个阶梯的最小请求次数 * max_rpd𝑖: 第 𝑖 个阶梯的最大请求次数 * discount𝑖: 第 𝑖 个阶梯的折扣（百分比形式） * base_price：基础价格 * request_per_day：每日请求次数 &gt; 那么，总成本的计算公式如下： - 总成本 &#x3D; Σ𝑖&#x3D;1𝑛（阶梯𝑖中的请求数量 * 阶梯𝑖中的折扣单价） - 其中，阶梯折扣单价 𝑖 &#x3D; base_price * (1 - 折扣𝑖/100) - 该阶梯中的请求数 𝑖 &#x3D; min(request_per_day - 累计付费请求数, max_rpd𝑖 - min_rpd𝑖) ### 示例 &gt; 假设有以下定价阶梯： * 第 1 阶梯：0 ≤ rpd &lt; 1000，折扣 0% * 第 2 阶梯：1000 ≤ rpd &lt; 5000，折扣 10% * 第 3 阶梯：5000 ≤ rpd &lt; 10000，折扣 20% * 第 4 阶梯：10000 ≤ rpd &lt; 20000，折扣 30% * 第 5 阶梯：20000 ≤ rpd &lt; 30000，折扣 40% * 第 6 阶梯：30000 ≤ rpd，折扣 50% &gt; 假设基础价格为 0.001 USD，每日请求次数为 12000，则计算过程如下： 1. **第 1 阶梯**（0 ≤ rpd &lt; 1000）：    * 阶梯内请求次数&#x3D;1000−0&#x3D;1000    * 阶梯折后单价&#x3D;0.001×(1−0/100)&#x3D;0.001    * 总成本&#x3D;1000×0.001&#x3D;1 2. **第 2 阶梯**（1000 ≤ rpd &lt; 5000）：    * 阶梯内请求次数&#x3D;5000−1000&#x3D;4000    * 阶梯折后单价&#x3D;0.001×(1−10/100)&#x3D;0.0009    * 总成本&#x3D;4000×0.0009&#x3D;3.6 3. **第 3 阶梯**（5000 ≤ rpd &lt; 10000）：    * 阶梯内请求次数&#x3D;10000−5000&#x3D;5000    * 阶梯折后单价&#x3D;0.001×(1−20/100)&#x3D;0.0008    * 总成本&#x3D;5000×0.0008&#x3D;4 4. **第 4 阶梯**（10000 ≤ rpd &lt; 20000）：    * 阶梯内请求次数&#x3D;12000−10000&#x3D;2000    * 阶梯折后单价&#x3D;0.001×(1−30/100)&#x3D;0.0007    * 总成本&#x3D;2000×0.0007&#x3D;1.4 5. **累加总成本**：    * 总成本&#x3D;1+3.6+4+1.4&#x3D;10 ### 返回: - 端点uri - 每日请求次数 - 端点原始请求单价 - 总价格 - 货币单位 - 阶梯式计费的折扣百分比信息  # [English] ### Purpose: - Calculate the final price based on the user&#39;s input of the number of daily requests and endpoint information. - Price calculation formula: Price &#x3D; Number of daily requests * (Original request unit price of the endpoint * (1 - discount percentage of tiered billing)) ### Parameters: - endpoint: Requested endpoint, used to query the original request unit price of the endpoint - request_per_day: Number of daily requests, used to calculate the price, the final price will be calculated automatically based on the discount percentage of the tiered billing ### Calculation formula: - Total cost &#x3D; ∑ (Number of requests in the tier * Discounted unit price in the tier) - Where, Discounted unit price in the tier &#x3D; Base price * (1 - Discount) ### Detailed calculation steps: 1. **Initialize the total cost**:      Total cost &#x3D; 0 2. **Traverse each tier**:         * For each tier, calculate the number of requests in the tier.         * Calculate the discounted unit price in the tier.         * Calculate the total cost in the tier and add it to the total cost.         * Update the remaining number of requests. ### Mathematical representation: Suppose there are 𝑛 tiers, and the parameters of each tier are: * min_rpd𝑖: The minimum number of requests in the 𝑖-th tier * max_rpd𝑖: The maximum number of requests in the 𝑖-th tier * discount𝑖: The discount of the 𝑖-th tier (in percentage form) * base_price: Base price * request_per_day: Number of daily requests &gt; Then, the formula for calculating the total cost is as follows: - Total cost &#x3D; ∑𝑖&#x3D;1𝑛(Number of requests in the tier 𝑖 * Discounted unit price in the tier 𝑖) - Where, Discounted unit price in the tier 𝑖 &#x3D; base_price * (1 - discount𝑖/100) - Number of requests in the tier 𝑖 &#x3D; min(request_per_day - accumulated number of paid requests, max_rpd𝑖 - min_rpd𝑖) ### Example Suppose there are the following pricing tiers: * Tier 1: 0 ≤ rpd &lt; 1000, discount 0% * Tier 2: 1000 ≤ rpd &lt; 5000, discount 10% * Tier 3: 5000 ≤ rpd &lt; 10000, discount 20% * Tier 4: 10000 ≤ rpd &lt; 20000, discount 30% * Tier 5: 20000 ≤ rpd &lt; 30000, discount 40% * Tier 6: 30000 ≤ rpd, discount 50% &gt; Suppose the base price is 0.001 USD and the number of daily requests is 12000, the calculation process is as follows: 1. **Tier 1** (0 ≤ rpd &lt; 1000):      - Number of requests in the tier 1 &#x3D; 1000 - 0 &#x3D; 1000      - Discounted unit price in the tier 1 &#x3D; 0.001 * (1 - 0/100) &#x3D; 0.001      - Total cost 1 &#x3D; 1000 * 0.001 &#x3D; 1 2. **Tier 2** (1000 ≤ rpd &lt; 5000):     - Number of requests in the tier 2 &#x3D; 5000 - 1000 &#x3D; 4000     - Discounted unit price in the tier 2 &#x3D; 0.001 * (1 - 10/100) &#x3D; 0.0009     - Total cost 2 &#x3D; 4000 * 0.0009 &#x3D; 3.6 3. **Tier 3** (5000 ≤ rpd &lt; 10000):     - Number of requests in the tier 3 &#x3D; 10000 - 5000 &#x3D; 5000     - Discounted unit price in the tier 3 &#x3D; 0.001 * (1 - 20/100) &#x3D; 0.0008     - Total cost 3 &#x3D; 5000 * 0.0008 &#x3D; 4 4. **Tier 4** (10000 ≤ rpd &lt; 20000):     - Number of requests in the tier 4 &#x3D; 12000 - 10000 &#x3D; 2000     - Discounted unit price in the tier 4 &#x3D; 0.001 * (1 - 30/100) &#x3D; 0.0007     - Total cost 4 &#x3D; 2000 * 0.0007 &#x3D; 1.4 5. **Accumulated total cost**:     - Total cost &#x3D; 1 + 3.6 + 4 + 1.4 &#x3D; 10 ### Return: - Endpoint uri - Number of daily requests - Original request unit price of the endpoint - Total price - Currency unit - Discount percentage information of tiered billing
    /// </remarks>
    /// <param name="endpoint">请求的端点/Requested endpoint</param>
    /// <param name="requestPerDay">每日请求次数/Request per day (optional, default to 0)</param>
    pplx::task<std::shared_ptr<ResponseModel>> calculatePriceApiV1TikhubUserCalculatePriceGet_0(
        utility::string_t endpoint,
        boost::optional<int32_t> requestPerDay
    ) const;
    /// <summary>
    /// 获取所有端点信息/Get all endpoints information
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取所有端点信息 ### 返回: - 所有端点信息  # [English] ### Purpose: - Get all endpoints information ### Return: - All endpoints information
    /// </remarks>
    pplx::task<std::shared_ptr<ResponseModel>> getAllEndpointsInfoApiV1TikhubUserGetAllEndpointsInfoGet(
    ) const;
    /// <summary>
    /// 获取所有端点信息/Get all endpoints information
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取所有端点信息 ### 返回: - 所有端点信息  # [English] ### Purpose: - Get all endpoints information ### Return: - All endpoints information
    /// </remarks>
    pplx::task<std::shared_ptr<ResponseModel>> getAllEndpointsInfoApiV1TikhubUserGetAllEndpointsInfoGet_0(
    ) const;
    /// <summary>
    /// 获取一个端点的信息/Get information of an endpoint
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取一个端点的信息 ### 参数: - endpoint: 请求的端点 ### 返回: - 端点信息  # [English] ### Purpose: - Get information of an endpoint ### Parameters: - endpoint: Requested endpoint ### Return: - Endpoint information
    /// </remarks>
    /// <param name="endpoint">请求的端点/Requested endpoint</param>
    pplx::task<std::shared_ptr<ResponseModel>> getEndpointInfoApiV1TikhubUserGetEndpointInfoGet(
        utility::string_t endpoint
    ) const;
    /// <summary>
    /// 获取一个端点的信息/Get information of an endpoint
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取一个端点的信息 ### 参数: - endpoint: 请求的端点 ### 返回: - 端点信息  # [English] ### Purpose: - Get information of an endpoint ### Parameters: - endpoint: Requested endpoint ### Return: - Endpoint information
    /// </remarks>
    /// <param name="endpoint">请求的端点/Requested endpoint</param>
    pplx::task<std::shared_ptr<ResponseModel>> getEndpointInfoApiV1TikhubUserGetEndpointInfoGet_0(
        utility::string_t endpoint
    ) const;
    /// <summary>
    /// 获取阶梯式折扣百分比信息/Get tiered discount percentage information
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取阶梯式折扣百分比信息 ### 返回: - 阶梯式折扣百分比信息  # [English] ### Purpose: - Get tiered discount percentage information ### Return: - Tiered discount percentage information
    /// </remarks>
    pplx::task<std::shared_ptr<ResponseModel>> getTieredDiscountInfoApiV1TikhubUserGetTieredDiscountInfoGet(
    ) const;
    /// <summary>
    /// 获取阶梯式折扣百分比信息/Get tiered discount percentage information
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取阶梯式折扣百分比信息 ### 返回: - 阶梯式折扣百分比信息  # [English] ### Purpose: - Get tiered discount percentage information ### Return: - Tiered discount percentage information
    /// </remarks>
    pplx::task<std::shared_ptr<ResponseModel>> getTieredDiscountInfoApiV1TikhubUserGetTieredDiscountInfoGet_0(
    ) const;
    /// <summary>
    /// 获取用户每日使用情况/Get user daily usage
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 请求头中携带API Key请求此端点可以查询当前账户每日使用情况。 ### 参数: - 请求头：{&#39;Authorization&#39;: &#39;Bearer API Key&#39;} ### 返回: - 用户每日使用情况  # [English] ### Purpose: - Request this endpoint with API Key in the header to query the current account daily usage. ### Parameters: - Headers: {&#39;Authorization&#39;: &#39;Bearer API Key&#39;} ### Return: - User daily usage
    /// </remarks>
    pplx::task<std::shared_ptr<ResponseModel>> getUserDailyUsageApiV1TikhubUserGetUserDailyUsageGet(
    ) const;
    /// <summary>
    /// 获取用户每日使用情况/Get user daily usage
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 请求头中携带API Key请求此端点可以查询当前账户每日使用情况。 ### 参数: - 请求头：{&#39;Authorization&#39;: &#39;Bearer API Key&#39;} ### 返回: - 用户每日使用情况  # [English] ### Purpose: - Request this endpoint with API Key in the header to query the current account daily usage. ### Parameters: - Headers: {&#39;Authorization&#39;: &#39;Bearer API Key&#39;} ### Return: - User daily usage
    /// </remarks>
    pplx::task<std::shared_ptr<ResponseModel>> getUserDailyUsageApiV1TikhubUserGetUserDailyUsageGet_0(
    ) const;
    /// <summary>
    /// 获取TikHub用户信息/Get TikHub user info
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 请求头中携带API Key请求此端点可以查询当前账户信息。 ### 参数: - 请求头：{&#39;Authorization&#39;: &#39;Bearer API_KEY&#39;} ### 返回: - 用户信息  # [English] ### Purpose: - Request this endpoint with API Key in the header to query the current account information. ### Parameters: - Headers: {&#39;Authorization&#39;: &#39;Bearer API_KEY&#39;} ### Return: - User information  # [示例/Example] &#x60;&#x60;&#x60;python response &#x3D; {       \&quot;code\&quot;: 200,       \&quot;router\&quot;: \&quot;/api/v1/tikhub/user/get_user_info\&quot;,       \&quot;api_key_data\&quot;: {         \&quot;api_key_name\&quot;: \&quot;Develop Test\&quot;,         \&quot;api_key_scopes\&quot;: [           \&quot;/api/v1/tikhub/user/\&quot;         ],         \&quot;created_at\&quot;: \&quot;2024-05-22T06:07:12.495520\&quot;,         \&quot;expires_at\&quot;: null,         \&quot;api_key_status\&quot;: 1       },       \&quot;user_data\&quot;: {         \&quot;email\&quot;: \&quot;example@example.com\&quot;,         \&quot;balance\&quot;: 100,         \&quot;free_credit\&quot;: 100,         \&quot;email_verified\&quot;: true,         \&quot;account_disabled\&quot;: false,         \&quot;is_active\&quot;: true       }     } &#x60;&#x60;&#x60;
    /// </remarks>
    pplx::task<std::shared_ptr<UserInfoResponseModel>> getUserInfoApiV1TikhubUserGetUserInfoGet(
    ) const;
    /// <summary>
    /// 获取TikHub用户信息/Get TikHub user info
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 请求头中携带API Key请求此端点可以查询当前账户信息。 ### 参数: - 请求头：{&#39;Authorization&#39;: &#39;Bearer API_KEY&#39;} ### 返回: - 用户信息  # [English] ### Purpose: - Request this endpoint with API Key in the header to query the current account information. ### Parameters: - Headers: {&#39;Authorization&#39;: &#39;Bearer API_KEY&#39;} ### Return: - User information  # [示例/Example] &#x60;&#x60;&#x60;python response &#x3D; {       \&quot;code\&quot;: 200,       \&quot;router\&quot;: \&quot;/api/v1/tikhub/user/get_user_info\&quot;,       \&quot;api_key_data\&quot;: {         \&quot;api_key_name\&quot;: \&quot;Develop Test\&quot;,         \&quot;api_key_scopes\&quot;: [           \&quot;/api/v1/tikhub/user/\&quot;         ],         \&quot;created_at\&quot;: \&quot;2024-05-22T06:07:12.495520\&quot;,         \&quot;expires_at\&quot;: null,         \&quot;api_key_status\&quot;: 1       },       \&quot;user_data\&quot;: {         \&quot;email\&quot;: \&quot;example@example.com\&quot;,         \&quot;balance\&quot;: 100,         \&quot;free_credit\&quot;: 100,         \&quot;email_verified\&quot;: true,         \&quot;account_disabled\&quot;: false,         \&quot;is_active\&quot;: true       }     } &#x60;&#x60;&#x60;
    /// </remarks>
    pplx::task<std::shared_ptr<UserInfoResponseModel>> getUserInfoApiV1TikhubUserGetUserInfoGet_0(
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* IO_TIKHUB_CLIENT_API_TikHubUserAPIApi_H_ */

